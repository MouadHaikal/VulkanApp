#include "app.hpp"

// Issues:
// ** Due to relative file paths in Renderer (shader files) executable must be ran from ${PROJECT_ROOT}/bin
// ** The size of the window is not always WIDTH x HEIGHT due to scale (see app.cpp)
// ** VK_PRESENT_MODE_MAILBOX_KHR is causing GPU to go 100% - solution: vsync/ max frame rate (see Renderer::chooseSwapPresentMode())
//    - https://www.reddit.com/r/vulkan/comments/awaoy1/really_high_gpu_usage_with_small_vulkan_apps_c/
//    - https://www.youtube.com/watch?v=FX78gvy5IR0
// ** vkQueueWaitIdle(transferQueue); in Renderer::copyBuffer()
// ** vkDeviceWaitIdle(device); in Renderer::recreateSwapchain()
//
// TODO: Set Application/Engine name in Renderer::createVulkanInstance() and App::init()
// TODO: Edit Renderer::rateDeviceSuitability(VkPhysicalDevice device)
// TODO: Set build config macro (see App::init() & Renderer::init())

int main(){
    App app;
    app.run();
}
