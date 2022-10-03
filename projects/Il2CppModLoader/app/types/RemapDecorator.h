#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemapDecorator {
        namespace {
            app::RemapDecorator__Class* type_info_ref = nullptr;
        }
        app::RemapDecorator__Class** type_info = &type_info_ref;
        inline app::RemapDecorator__Class* get_class() {
            return il2cpp::get_class<app::RemapDecorator__Class>(type_info, "Moon.BehaviourSystem", "RemapDecorator");
        }
        inline app::RemapDecorator* create() {
            return il2cpp::create_object<app::RemapDecorator>(get_class());
        }
    } // namespace RemapDecorator
} // namespace app::classes::types
