#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BabySeinController_AnimationLayers__Enum {
        namespace {
            inline app::BabySeinController_AnimationLayers__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BabySeinController_AnimationLayers__Enum__Class** type_info = &type_info_ref;
        inline app::BabySeinController_AnimationLayers__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BabySeinController_AnimationLayers__Enum__Class>(type_info, "", "BabySeinController", "AnimationLayers");
        }
        inline app::BabySeinController_AnimationLayers__Enum* create() {
            return il2cpp::create_object<app::BabySeinController_AnimationLayers__Enum>(get_class());
        }
    } // namespace BabySeinController_AnimationLayers__Enum
} // namespace app::classes::types
