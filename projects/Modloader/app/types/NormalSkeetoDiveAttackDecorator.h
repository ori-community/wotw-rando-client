#pragma once
#include <Modloader/app/structs/NormalSkeetoDiveAttackDecorator.h>
#include <Modloader/app/structs/NormalSkeetoDiveAttackDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NormalSkeetoDiveAttackDecorator {
        inline app::NormalSkeetoDiveAttackDecorator__Class** type_info() {
            static app::NormalSkeetoDiveAttackDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NormalSkeetoDiveAttackDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NormalSkeetoDiveAttackDecorator__Class* get_class() {
            return il2cpp::get_class<app::NormalSkeetoDiveAttackDecorator__Class>(type_info(), "", "NormalSkeetoDiveAttackDecorator");
        }
        inline app::NormalSkeetoDiveAttackDecorator* create() {
            return il2cpp::create_object<app::NormalSkeetoDiveAttackDecorator>(get_class());
        }
    } // namespace NormalSkeetoDiveAttackDecorator
} // namespace app::classes::types
