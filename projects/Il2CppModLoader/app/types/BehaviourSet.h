#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourSet {
        namespace {
            app::BehaviourSet__Class* type_info_ref = nullptr;
        }
        app::BehaviourSet__Class** type_info = &type_info_ref;
        inline app::BehaviourSet__Class* get_class() {
            return il2cpp::get_class<app::BehaviourSet__Class>(type_info, "", "BehaviourSet");
        }
        inline app::BehaviourSet* create() {
            return il2cpp::create_object<app::BehaviourSet>(get_class());
        }
    } // namespace BehaviourSet
} // namespace app::classes::types
