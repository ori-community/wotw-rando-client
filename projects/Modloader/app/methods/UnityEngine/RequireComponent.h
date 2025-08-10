#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RequireComponent.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::UnityEngine::RequireComponent {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, app::RequireComponent* this_ptr, app::Type* required_component)
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, app::RequireComponent* this_ptr, app::Type* required_component, app::Type* required_component2)
} // namespace app::classes::UnityEngine::RequireComponent
