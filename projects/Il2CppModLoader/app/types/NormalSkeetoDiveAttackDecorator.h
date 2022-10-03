#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NormalSkeetoDiveAttackDecorator {
        namespace {
            app::NormalSkeetoDiveAttackDecorator__Class* type_info_ref = nullptr;
        }
        app::NormalSkeetoDiveAttackDecorator__Class** type_info = &type_info_ref;
        inline app::NormalSkeetoDiveAttackDecorator__Class* get_class() {
            return il2cpp::get_class<app::NormalSkeetoDiveAttackDecorator__Class>(type_info, "", "NormalSkeetoDiveAttackDecorator");
        }
        inline app::NormalSkeetoDiveAttackDecorator* create() {
            return il2cpp::create_object<app::NormalSkeetoDiveAttackDecorator>(get_class());
        }
    } // namespace NormalSkeetoDiveAttackDecorator
} // namespace app::classes::types
