#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VFXEventAttribute.h>

namespace app::classes::UnityEngine::Experimental::VFX::VFXEventAttribute {
    IL2CPP_REGISTER_METHOD(0x031C0B10, void, Release, (app::VFXEventAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0BF0, void, Finalize, (app::VFXEventAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0C80, void, Dispose, (app::VFXEventAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0D30, void, Internal_Destroy, (void* ptr))
} // namespace app::classes::UnityEngine::Experimental::VFX::VFXEventAttribute
