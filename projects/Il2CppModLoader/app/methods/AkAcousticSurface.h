#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkAcousticSurface {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkAcousticSurface * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026C3FA0, void*, getCPtr, (app::AkAcousticSurface * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkAcousticSurface * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026C4030, void, Finalize, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C40B0, void, Dispose, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C42C0, void, ctor_2, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C43E0, void, set_textureID, (app::AkAcousticSurface * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026C4510, uint32_t, get_textureID, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C4630, void, set_reflectorChannelMask, (app::AkAcousticSurface * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026C4760, uint32_t, get_reflectorChannelMask, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C4880, void, set_strName, (app::AkAcousticSurface * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x026C4A80, app::String*, get_strName, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C4BD0, void, Clear, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C4C70, void, DeleteName, (app::AkAcousticSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C4D90, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x026C4E20, void, Clone, (app::AkAcousticSurface * this_ptr, app::AkAcousticSurface* other))
} // namespace app::classes::AkAcousticSurface
