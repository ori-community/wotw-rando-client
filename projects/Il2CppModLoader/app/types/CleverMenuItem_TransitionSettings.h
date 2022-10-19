#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItem_TransitionSettings {
        namespace {
            inline app::CleverMenuItem_TransitionSettings__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItem_TransitionSettings__Class** type_info = &type_info_ref;
        inline app::CleverMenuItem_TransitionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItem_TransitionSettings__Class>(type_info, "", "CleverMenuItem", "TransitionSettings");
        }
        inline app::CleverMenuItem_TransitionSettings* create() {
            return il2cpp::create_object<app::CleverMenuItem_TransitionSettings>(get_class());
        }
    } // namespace CleverMenuItem_TransitionSettings
} // namespace app::classes::types
