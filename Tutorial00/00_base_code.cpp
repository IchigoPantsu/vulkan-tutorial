#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApplication {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    GLFWwindow* window;

    void initWindow() {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);

        /*
        VkSurfaceKHR surface;
        VkResult err = glfwCreateWindowSurface(instance, window, NULL, &surface);
        if (err)
        {
           // Window surface creation failed
        }
        */

      /*
        if (!glfwInit())
        exit(1);

            //GLFWwindow*
                window = glfwCreateWindow(1280, 720, "RCC++ Dear ImGui GLFW example", NULL, NULL);
            glfwMakeContextCurrent(window);
            glfwSwapInterval(1); // Enable vsync

        */
    // Power save - ensure callbacks point to the correct place
    }

    void initVulkan() {

    }

    void mainLoop() {
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();

            //glViewport(0, 0, (int)ImGui::GetIO().DisplaySize.x, (int)ImGui::GetIO().DisplaySize.y);
            //glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
            //glClear(GL_COLOR_BUFFER_BIT);

        }
    }

    void cleanup() {
        glfwDestroyWindow(window);

        glfwTerminate();
    }
};

int main() {
    HelloTriangleApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
