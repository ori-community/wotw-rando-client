#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ConceptScreen {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::ConceptScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::SuspendableMask__Enum, get_Mask, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2860, void, set_Mask, (app::ConceptScreen * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x011E2910, void, Awake, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2A60, void, OnDestroy, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2B60, void, ApplyImage, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2DE0, void, Activate, (app::ConceptScreen * this_ptr, app::Texture* texture))
    IL2CPP_REGISTER_METHOD(0x011E32F0, void, Deactivate, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E35B0, void, FixedUpdate, (app::ConceptScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E37C0, void, ChangeImage, (app::ConceptScreen * this_ptr, int32_t e))
    IL2CPP_REGISTER_METHOD(0x011E3990, void, ctor, (app::ConceptScreen * this_ptr))
} // namespace app::classes::ConceptScreen
