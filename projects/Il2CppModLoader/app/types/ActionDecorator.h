#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionDecorator {
        namespace {
            inline app::ActionDecorator__Class* type_info_ref = nullptr;
        }
        inline app::ActionDecorator__Class** type_info = &type_info_ref;
        inline app::ActionDecorator__Class* get_class() {
            return il2cpp::get_class<app::ActionDecorator__Class>(type_info, "Moon.BehaviourSystem", "ActionDecorator");
        }
        inline app::ActionDecorator* create() {
            return il2cpp::create_object<app::ActionDecorator>(get_class());
        }
    } // namespace ActionDecorator
} // namespace app::classes::types
