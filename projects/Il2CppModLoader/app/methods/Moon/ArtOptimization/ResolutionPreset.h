#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ResolutionPreset {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Width, (app::ResolutionPreset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Width, (app::ResolutionPreset * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Height, (app::ResolutionPreset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Height, (app::ResolutionPreset * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Title, (app::ResolutionPreset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Title, (app::ResolutionPreset * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0134FD60, void, ctor, (app::ResolutionPreset * this_ptr, int32_t width, int32_t height, app::String * title))
}
