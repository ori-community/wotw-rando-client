#pragma once
#include <Modloader/app/structs/LanguageCondition.h>
#include <Modloader/app/structs/LanguageCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LanguageCondition {
        inline app::LanguageCondition__Class** type_info() {
            static app::LanguageCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LanguageCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LanguageCondition__Class* get_class() {
            return il2cpp::get_class<app::LanguageCondition__Class>(type_info(), "", "LanguageCondition");
        }
        inline app::LanguageCondition* create() {
            return il2cpp::create_object<app::LanguageCondition>(get_class());
        }
    } // namespace LanguageCondition
} // namespace app::classes::types
