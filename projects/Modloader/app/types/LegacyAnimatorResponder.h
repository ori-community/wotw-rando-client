#pragma once
#include <Modloader/app/structs/LegacyAnimatorResponder.h>
#include <Modloader/app/structs/LegacyAnimatorResponder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimatorResponder {
        inline app::LegacyAnimatorResponder__Class** type_info() {
            static app::LegacyAnimatorResponder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAnimatorResponder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAnimatorResponder__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorResponder__Class>(type_info(), "", "LegacyAnimatorResponder");
        }
        inline app::LegacyAnimatorResponder* create() {
            return il2cpp::create_object<app::LegacyAnimatorResponder>(get_class());
        }
    } // namespace LegacyAnimatorResponder
} // namespace app::classes::types
