#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::VideoDescriptor {
    IL2CPP_REGISTER_METHOD(0x008BB830, app::String*, GetFullVideoOGVPath, (app::VideoDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BB8C0, app::String*, GetEditorAssetVideoOGVPath, (app::VideoDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BB950, app::String*, GetVideoWMVPath, (app::VideoDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BB9E0, app::String*, GetStreamingFolderName, ())
    IL2CPP_REGISTER_METHOD(0x008BBA60, app::String*, GetVideoPath, (app::VideoDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BBBC0, app::String*, GetStreamingVideoPath, (app::VideoDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BBCC0, void, ctor, (app::VideoDescriptor * this_ptr))
} // namespace app::classes::VideoDescriptor
