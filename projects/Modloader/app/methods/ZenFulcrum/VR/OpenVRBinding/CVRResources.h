#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRResources {
    IL2CPP_REGISTER_METHOD(0x0167B320, void, ctor, (app::CVRResources * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x0167B440, uint32_t, LoadSharedResource, (app::CVRResources * this_ptr, app::String* pch_resource_name, app::String* pch_buffer, uint32_t un_buffer_len))
    IL2CPP_REGISTER_METHOD(0x0167B470, uint32_t, GetResourceFullPath, (app::CVRResources * this_ptr, app::String* pch_resource_name, app::String* pch_resource_type_directory, app::String* pch_path_buffer, uint32_t un_buffer_len))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRResources
