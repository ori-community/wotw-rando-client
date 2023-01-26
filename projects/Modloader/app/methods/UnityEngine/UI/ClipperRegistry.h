#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClipperRegistry.h>
#include <Modloader/app/structs/IClipper.h>

namespace app::classes::UnityEngine::UI::ClipperRegistry {
    IL2CPP_REGISTER_METHOD(0x01F2F2F0, void, ctor, (app::ClipperRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2F440, app::ClipperRegistry*, get_instance, ())
    IL2CPP_REGISTER_METHOD(0x01F2F6D0, void, Cull, (app::ClipperRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2F890, void, Register, (app::IClipper * c))
    IL2CPP_REGISTER_METHOD(0x01F2F940, void, Unregister, (app::IClipper * c))
} // namespace app::classes::UnityEngine::UI::ClipperRegistry
