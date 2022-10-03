#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugDecorator {
        namespace {
            app::DebugDecorator__Class* type_info_ref = nullptr;
        }
        app::DebugDecorator__Class** type_info = &type_info_ref;
        inline app::DebugDecorator__Class* get_class() {
            return il2cpp::get_class<app::DebugDecorator__Class>(type_info, "Moon.BehaviourSystem", "DebugDecorator");
        }
        inline app::DebugDecorator* create() {
            return il2cpp::create_object<app::DebugDecorator>(get_class());
        }
    } // namespace DebugDecorator
} // namespace app::classes::types
