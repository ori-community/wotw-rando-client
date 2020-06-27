#include <build.h>
#if USE_VULKAN

#include <engine.h>
#include <SDL2/SDL_vulkan.h>
#include <vulkan/vulkan.h>
#include <gui/implementation/imgui_impl_sdl.h>
#include <gui/implementation/imgui_impl_vulkan.h>

namespace gui_engine {
    namespace
    {
        VkAllocationCallbacks* g_Allocator = NULL;
        VkInstance g_Instance = VK_NULL_HANDLE;
        VkPhysicalDevice g_PhysicalDevice = VK_NULL_HANDLE;
        VkDevice g_Device = VK_NULL_HANDLE;
        uint32_t g_QueueFamily = (uint32_t)-1;
        VkQueue g_Queue = VK_NULL_HANDLE;
        VkDebugReportCallbackEXT g_DebugReport = VK_NULL_HANDLE;
        VkPipelineCache g_PipelineCache = VK_NULL_HANDLE;
        VkDescriptorPool g_DescriptorPool = VK_NULL_HANDLE;

        ImGui_ImplVulkanH_Window g_MainWindowData;
        uint32_t g_MinImageCount = 2;
        bool g_SwapChainRebuild = false;
        int g_SwapChainResizeWidth = 0;
        int g_SwapChainResizeHeight = 0;

        void check_vk_result(VkResult err)
        {
            if (err == 0)
                return;
            fprintf(stderr, "[vulkan] Error: VkResult = %d\n", err);
            if (err < 0)
                abort();
        }

#ifdef IMGUI_VULKAN_DEBUG_REPORT
        VKAPI_ATTR VkBool32 VKAPI_CALL debug_report(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage, void* pUserData)
        {
            (void)flags; (void)object; (void)location; (void)messageCode; (void)pUserData; (void)pLayerPrefix; // Unused arguments
            fprintf(stderr, "[vulkan] Debug report from ObjectType: %i\nMessage: %s\n\n", objectType, pMessage);
            return VK_FALSE;
        }
#endif // IMGUI_VULKAN_DEBUG_REPORT

        void setup_vulkan(const char** extensions, uint32_t extensions_count)
        {
            VkResult err;

            // Create Vulkan Instance
            {
                VkInstanceCreateInfo create_info = {};
                create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
                create_info.enabledExtensionCount = extensions_count;
                create_info.ppEnabledExtensionNames = extensions;

#ifdef IMGUI_VULKAN_DEBUG_REPORT
                // Enabling multiple validation layers grouped as LunarG standard validation
                const char* layers[] = { "VK_LAYER_LUNARG_standard_validation" };
                create_info.enabledLayerCount = 1;
                create_info.ppEnabledLayerNames = layers;

                // Enable debug report extension (we need additional storage, so we duplicate the user array to add our new extension to it)
                const char** extensions_ext = (const char**)malloc(sizeof(const char*) * (extensions_count + 1));
                memcpy(extensions_ext, extensions, extensions_count * sizeof(const char*));
                extensions_ext[extensions_count] = "VK_EXT_debug_report";
                create_info.enabledExtensionCount = extensions_count + 1;
                create_info.ppEnabledExtensionNames = extensions_ext;

                // Create Vulkan Instance
                err = vkCreateInstance(&create_info, g_Allocator, &g_Instance);
                check_vk_result(err);
                free(extensions_ext);

                // Get the function pointer (required for any extensions)
                auto vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, "vkCreateDebugReportCallbackEXT");
                IM_ASSERT(vkCreateDebugReportCallbackEXT != NULL);

                // Setup the debug report callback
                VkDebugReportCallbackCreateInfoEXT debug_report_ci = {};
                debug_report_ci.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
                debug_report_ci.flags = VK_DEBUG_REPORT_ERROR_BIT_EXT | VK_DEBUG_REPORT_WARNING_BIT_EXT | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT;
                debug_report_ci.pfnCallback = debug_report;
                debug_report_ci.pUserData = NULL;
                err = vkCreateDebugReportCallbackEXT(g_Instance, &debug_report_ci, g_Allocator, &g_DebugReport);
                check_vk_result(err);
#else
                // Create Vulkan Instance without any debug feature
                err = vkCreateInstance(&create_info, g_Allocator, &g_Instance);
                check_vk_result(err);
                IM_UNUSED(g_DebugReport);
#endif
            }

            // Select GPU
            {
                uint32_t gpu_count;
                err = vkEnumeratePhysicalDevices(g_Instance, &gpu_count, NULL);
                check_vk_result(err);
                IM_ASSERT(gpu_count > 0);

                VkPhysicalDevice* gpus = (VkPhysicalDevice*)malloc(sizeof(VkPhysicalDevice) * gpu_count);
                err = vkEnumeratePhysicalDevices(g_Instance, &gpu_count, gpus);
                check_vk_result(err);

                // If a number >1 of GPUs got reported, you should find the best fit GPU for your purpose
                // e.g. VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU if available, or with the greatest memory available, etc.
                // for sake of simplicity we'll just take the first one, assuming it has a graphics queue family.
                g_PhysicalDevice = gpus[0];
                free(gpus);
            }

            // Select graphics queue family
            {
                uint32_t count;
                vkGetPhysicalDeviceQueueFamilyProperties(g_PhysicalDevice, &count, NULL);
                VkQueueFamilyProperties* queues = (VkQueueFamilyProperties*)malloc(sizeof(VkQueueFamilyProperties) * count);
                vkGetPhysicalDeviceQueueFamilyProperties(g_PhysicalDevice, &count, queues);
                for (uint32_t i = 0; i < count; i++)
                    if (queues[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
                    {
                        g_QueueFamily = i;
                        break;
                    }
                free(queues);
                IM_ASSERT(g_QueueFamily != (uint32_t)-1);
            }

            // Create Logical Device (with 1 queue)
            {
                int device_extension_count = 1;
                const char* device_extensions[] = { "VK_KHR_swapchain" };
                const float queue_priority[] = { 1.0f };
                VkDeviceQueueCreateInfo queue_info[1] = {};
                queue_info[0].sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
                queue_info[0].queueFamilyIndex = g_QueueFamily;
                queue_info[0].queueCount = 1;
                queue_info[0].pQueuePriorities = queue_priority;
                VkDeviceCreateInfo create_info = {};
                create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
                create_info.queueCreateInfoCount = sizeof(queue_info) / sizeof(queue_info[0]);
                create_info.pQueueCreateInfos = queue_info;
                create_info.enabledExtensionCount = device_extension_count;
                create_info.ppEnabledExtensionNames = device_extensions;
                err = vkCreateDevice(g_PhysicalDevice, &create_info, g_Allocator, &g_Device);
                check_vk_result(err);
                vkGetDeviceQueue(g_Device, g_QueueFamily, 0, &g_Queue);
            }

            // Create Descriptor Pool
            {
                VkDescriptorPoolSize pool_sizes[] =
                {
                    { VK_DESCRIPTOR_TYPE_SAMPLER, 1000 },
                    { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1000 },
                    { VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, 1000 },
                    { VK_DESCRIPTOR_TYPE_STORAGE_IMAGE, 1000 },
                    { VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER, 1000 },
                    { VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER, 1000 },
                    { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1000 },
                    { VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1000 },
                    { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, 1000 },
                    { VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC, 1000 },
                    { VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT, 1000 }
                };
                VkDescriptorPoolCreateInfo pool_info = {};
                pool_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
                pool_info.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
                pool_info.maxSets = 1000 * IM_ARRAYSIZE(pool_sizes);
                pool_info.poolSizeCount = (uint32_t)IM_ARRAYSIZE(pool_sizes);
                pool_info.pPoolSizes = pool_sizes;
                err = vkCreateDescriptorPool(g_Device, &pool_info, g_Allocator, &g_DescriptorPool);
                check_vk_result(err);
            }
        }

        // All the ImGui_ImplVulkanH_XXX structures/functions are optional helpers used by the demo.
        // Your real engine/app may not use them.
        void setup_vulkan_window(ImGui_ImplVulkanH_Window* wd, VkSurfaceKHR surface, int width, int height)
        {
            wd->Surface = surface;

            // Check for WSI support
            VkBool32 res;
            vkGetPhysicalDeviceSurfaceSupportKHR(g_PhysicalDevice, g_QueueFamily, wd->Surface, &res);
            if (res != VK_TRUE)
            {
                fprintf(stderr, "Error no WSI support on physical device 0\n");
                exit(-1);
            }

            // Select Surface Format
            const VkFormat requestSurfaceImageFormat[] = { VK_FORMAT_B8G8R8A8_UNORM, VK_FORMAT_R8G8B8A8_UNORM, VK_FORMAT_B8G8R8_UNORM, VK_FORMAT_R8G8B8_UNORM };
            const VkColorSpaceKHR requestSurfaceColorSpace = VK_COLORSPACE_SRGB_NONLINEAR_KHR;
            wd->SurfaceFormat = ImGui_ImplVulkanH_SelectSurfaceFormat(g_PhysicalDevice, wd->Surface, requestSurfaceImageFormat, (size_t)IM_ARRAYSIZE(requestSurfaceImageFormat), requestSurfaceColorSpace);

            // Select Present Mode
#ifdef IMGUI_UNLIMITED_FRAME_RATE
            VkPresentModeKHR present_modes[] = { VK_PRESENT_MODE_MAILBOX_KHR, VK_PRESENT_MODE_IMMEDIATE_KHR, VK_PRESENT_MODE_FIFO_KHR };
#else
            VkPresentModeKHR present_modes[] = { VK_PRESENT_MODE_FIFO_KHR };
#endif
            wd->PresentMode = ImGui_ImplVulkanH_SelectPresentMode(g_PhysicalDevice, wd->Surface, &present_modes[0], IM_ARRAYSIZE(present_modes));
            //printf("[vulkan] Selected PresentMode = %d\n", wd->PresentMode);

            // Create SwapChain, RenderPass, Framebuffer, etc.
            IM_ASSERT(g_MinImageCount >= 2);
            ImGui_ImplVulkanH_CreateOrResizeWindow(g_Instance, g_PhysicalDevice, g_Device, wd, g_QueueFamily, g_Allocator, width, height, g_MinImageCount);
        }

        void cleanup_vulkan()
        {
            vkDestroyDescriptorPool(g_Device, g_DescriptorPool, g_Allocator);

#ifdef IMGUI_VULKAN_DEBUG_REPORT
            // Remove the debug report callback
            auto vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, "vkDestroyDebugReportCallbackEXT");
            vkDestroyDebugReportCallbackEXT(g_Instance, g_DebugReport, g_Allocator);
#endif // IMGUI_VULKAN_DEBUG_REPORT

            vkDestroyDevice(g_Device, g_Allocator);
            vkDestroyInstance(g_Instance, g_Allocator);
        }

        void cleanup_vulkan_window()
        {
            ImGui_ImplVulkanH_DestroyWindow(g_Instance, g_Device, &g_MainWindowData, g_Allocator);
        }

        void frame_render(ImGui_ImplVulkanH_Window* wd, ImDrawData* draw_data)
        {
            VkResult err;

            VkSemaphore image_acquired_semaphore = wd->FrameSemaphores[wd->SemaphoreIndex].ImageAcquiredSemaphore;
            VkSemaphore render_complete_semaphore = wd->FrameSemaphores[wd->SemaphoreIndex].RenderCompleteSemaphore;
            err = vkAcquireNextImageKHR(g_Device, wd->Swapchain, UINT64_MAX, image_acquired_semaphore, VK_NULL_HANDLE, &wd->FrameIndex);
            check_vk_result(err);

            ImGui_ImplVulkanH_Frame* fd = &wd->Frames[wd->FrameIndex];
            {
                err = vkWaitForFences(g_Device, 1, &fd->Fence, VK_TRUE, UINT64_MAX);    // wait indefinitely instead of periodically checking
                check_vk_result(err);

                err = vkResetFences(g_Device, 1, &fd->Fence);
                check_vk_result(err);
            }
            {
                err = vkResetCommandPool(g_Device, fd->CommandPool, 0);
                check_vk_result(err);
                VkCommandBufferBeginInfo info = {};
                info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
                info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
                err = vkBeginCommandBuffer(fd->CommandBuffer, &info);
                check_vk_result(err);
            }
            {
                VkRenderPassBeginInfo info = {};
                info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
                info.renderPass = wd->RenderPass;
                info.framebuffer = fd->Framebuffer;
                info.renderArea.extent.width = wd->Width;
                info.renderArea.extent.height = wd->Height;
                info.clearValueCount = 1;
                info.pClearValues = &wd->ClearValue;
                vkCmdBeginRenderPass(fd->CommandBuffer, &info, VK_SUBPASS_CONTENTS_INLINE);
            }

            // Record dear imgui primitives into command buffer
            ImGui_ImplVulkan_RenderDrawData(draw_data, fd->CommandBuffer);

            // Submit command buffer
            vkCmdEndRenderPass(fd->CommandBuffer);
            {
                VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
                VkSubmitInfo info = {};
                info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
                info.waitSemaphoreCount = 1;
                info.pWaitSemaphores = &image_acquired_semaphore;
                info.pWaitDstStageMask = &wait_stage;
                info.commandBufferCount = 1;
                info.pCommandBuffers = &fd->CommandBuffer;
                info.signalSemaphoreCount = 1;
                info.pSignalSemaphores = &render_complete_semaphore;

                err = vkEndCommandBuffer(fd->CommandBuffer);
                check_vk_result(err);
                err = vkQueueSubmit(g_Queue, 1, &info, fd->Fence);
                check_vk_result(err);
            }
        }

        void frame_present(ImGui_ImplVulkanH_Window* wd)
        {
            VkSemaphore render_complete_semaphore = wd->FrameSemaphores[wd->SemaphoreIndex].RenderCompleteSemaphore;
            VkPresentInfoKHR info = {};
            info.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
            info.waitSemaphoreCount = 1;
            info.pWaitSemaphores = &render_complete_semaphore;
            info.swapchainCount = 1;
            info.pSwapchains = &wd->Swapchain;
            info.pImageIndices = &wd->FrameIndex;
            VkResult err = vkQueuePresentKHR(g_Queue, &info);
            check_vk_result(err);
            wd->SemaphoreIndex = (wd->SemaphoreIndex + 1) % wd->ImageCount; // Now we can use the next set of semaphores
        }
    }

    int start_loop(GuiData& gui, init_callback init, event_callback handle_event, tick_callback tick, render_callback render)
    {
        // Setup SDL
        if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
        {
            printf("Error: %s\n", SDL_GetError());
            return -1;
        }

        // Setup window
        uint32_t window_flags = static_cast<uint32_t>(SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
        SDL_Window* window = SDL_CreateWindow(
            gui.title.c_str(),
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            static_cast<int>(gui.window_size.x),
            static_cast<int>(gui.window_size.y),
            window_flags
        );

        // Setup Vulkan
        uint32_t extensions_count = 0;
        SDL_Vulkan_GetInstanceExtensions(window, &extensions_count, NULL);
        const char** extensions = new const char* [extensions_count];
        SDL_Vulkan_GetInstanceExtensions(window, &extensions_count, extensions);
        setup_vulkan(extensions, extensions_count);
        delete[] extensions;

        // Create Window Surface
        VkSurfaceKHR surface;
        VkResult err;
        if (SDL_Vulkan_CreateSurface(window, g_Instance, &surface) == 0)
        {
            printf("Failed to create Vulkan surface.\n");
            return 1;
        }

        // Create Framebuffers
        int w, h;
        SDL_GetWindowSize(window, &w, &h);
        ImGui_ImplVulkanH_Window* wd = &g_MainWindowData;
        setup_vulkan_window(wd, surface, w, h);

        // Setup Dear ImGui context
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO();
        //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
        //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

        io.IniFilename = nullptr;
        ImGui::StyleColorsDark();

        // Setup Platform/Renderer bindings
        ImGui_ImplSDL2_InitForVulkan(window);
        ImGui_ImplVulkan_InitInfo init_info = {};
        init_info.Instance = g_Instance;
        init_info.PhysicalDevice = g_PhysicalDevice;
        init_info.Device = g_Device;
        init_info.QueueFamily = g_QueueFamily;
        init_info.Queue = g_Queue;
        init_info.PipelineCache = g_PipelineCache;
        init_info.DescriptorPool = g_DescriptorPool;
        init_info.Allocator = g_Allocator;
        init_info.MinImageCount = g_MinImageCount;
        init_info.ImageCount = wd->ImageCount;
        init_info.CheckVkResultFn = check_vk_result;
        ImGui_ImplVulkan_Init(&init_info, wd->RenderPass);

        io.Fonts->AddFontDefault();

        // Upload Fonts
        {
            // Use any command queue
            VkCommandPool command_pool = wd->Frames[wd->FrameIndex].CommandPool;
            VkCommandBuffer command_buffer = wd->Frames[wd->FrameIndex].CommandBuffer;

            err = vkResetCommandPool(g_Device, command_pool, 0);
            check_vk_result(err);
            VkCommandBufferBeginInfo begin_info = {};
            begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
            begin_info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            err = vkBeginCommandBuffer(command_buffer, &begin_info);
            check_vk_result(err);

            ImGui_ImplVulkan_CreateFontsTexture(command_buffer);

            VkSubmitInfo end_info = {};
            end_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
            end_info.commandBufferCount = 1;
            end_info.pCommandBuffers = &command_buffer;
            err = vkEndCommandBuffer(command_buffer);
            check_vk_result(err);
            err = vkQueueSubmit(g_Queue, 1, &end_info, VK_NULL_HANDLE);
            check_vk_result(err);

            err = vkDeviceWaitIdle(g_Device);
            check_vk_result(err);
            ImGui_ImplVulkan_DestroyFontUploadObjects();
        }

        // Our state
        bool show_demo_window = true;
        bool show_another_window = false;
        ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
        gui.last_time = std::chrono::high_resolution_clock::now();

        init(gui);

        // Main loop
        while (gui.running)
        {
            using dtf = std::chrono::duration<float>;
            auto time = std::chrono::high_resolution_clock::now();
            dtf delta_time = time - gui.last_time;
            gui.delta_time = delta_time.count();
            io.DeltaTime = gui.delta_time;

            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                ImGui_ImplSDL2_ProcessEvent(&event);
                if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_RESIZED && event.window.windowID == SDL_GetWindowID(window))
                {
                    // Note: your own application may rely on SDL_WINDOWEVENT_MINIMIZED/SDL_WINDOWEVENT_RESTORED to skip updating all-together.
                    // Here ImGui_ImplSDL2_NewFrame() will set io.DisplaySize to zero which will disable rendering but let application run.
                    // Please note that you can't Present into a minimized window.
                    g_SwapChainResizeWidth = (int)event.window.data1;
                    g_SwapChainResizeHeight = (int)event.window.data2;
                    g_SwapChainRebuild = true;
                    gui.window_size.x = static_cast<float>(event.window.data1);
                    gui.window_size.y = static_cast<float>(event.window.data2);
                }

                handle_event(gui, event);
            }

            // Resize swap chain?
            if (g_SwapChainRebuild && g_SwapChainResizeWidth > 0 && g_SwapChainResizeHeight > 0)
            {
                g_SwapChainRebuild = false;
                ImGui_ImplVulkan_SetMinImageCount(g_MinImageCount);
                ImGui_ImplVulkanH_CreateOrResizeWindow(g_Instance, g_PhysicalDevice, g_Device, &g_MainWindowData, g_QueueFamily, g_Allocator, g_SwapChainResizeWidth, g_SwapChainResizeHeight, g_MinImageCount);
                g_MainWindowData.FrameIndex = 0;
            }

            tick(gui);

            // Start the Dear ImGui frame
            ImGui_ImplVulkan_NewFrame();
            ImGui_ImplSDL2_NewFrame(window);
            ImGui::NewFrame();

            render(gui);

            // Rendering
            ImGui::Render();
            ImDrawData* draw_data = ImGui::GetDrawData();
            const bool is_minimized = (draw_data->DisplaySize.x <= 0.0f || draw_data->DisplaySize.y <= 0.0f);
            if (!is_minimized)
            {
                frame_render(wd, draw_data);
                frame_present(wd);
            }
        }

        // Cleanup
        err = vkDeviceWaitIdle(g_Device);
        check_vk_result(err);
        ImGui_ImplVulkan_Shutdown();
        ImGui_ImplSDL2_Shutdown();
        ImGui::DestroyContext();

        cleanup_vulkan_window();
        cleanup_vulkan();

        SDL_DestroyWindow(window);
        SDL_Quit();

        return 0;
    }
}

#endif
