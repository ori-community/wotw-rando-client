#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkObstructionOcclusionValues {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkObstructionOcclusionValues * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x018854F0, void*, getCPtr, (app::AkObstructionOcclusionValues * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkObstructionOcclusionValues * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01885580, void, Finalize, (app::AkObstructionOcclusionValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01885600, void, Dispose, (app::AkObstructionOcclusionValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01885810, void, set_occlusion, (app::AkObstructionOcclusionValues * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01885940, float, get_occlusion, (app::AkObstructionOcclusionValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01885A60, void, set_obstruction, (app::AkObstructionOcclusionValues * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01885B90, float, get_obstruction, (app::AkObstructionOcclusionValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01885CB0, void, Clear, (app::AkObstructionOcclusionValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01885D50, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x01885DE0, void, Clone, (app::AkObstructionOcclusionValues * this_ptr, app::AkObstructionOcclusionValues* other))
    IL2CPP_REGISTER_METHOD(0x01885F00, void, ctor_2, (app::AkObstructionOcclusionValues * this_ptr))
} // namespace app::classes::AkObstructionOcclusionValues
