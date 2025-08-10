#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/VisibleToOtherModulesAttribute.h>

namespace app::classes::UnityEngine::Bindings::VisibleToOtherModulesAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::VisibleToOtherModulesAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, app::VisibleToOtherModulesAttribute* this_ptr, app::String__Array* modules)
} // namespace app::classes::UnityEngine::Bindings::VisibleToOtherModulesAttribute
