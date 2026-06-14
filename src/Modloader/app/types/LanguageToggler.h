#pragma once
#include <Modloader/app/structs/LanguageToggler.h>
#include <Modloader/app/structs/LanguageToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LanguageToggler {
        inline app::LanguageToggler__Class** type_info() {
            static app::LanguageToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LanguageToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LanguageToggler__Class* get_class() {
            return il2cpp::get_class<app::LanguageToggler__Class>(type_info(), "", "LanguageToggler");
        }
        inline app::LanguageToggler* create() {
            return il2cpp::create_object<app::LanguageToggler>(get_class());
        }
    } // namespace LanguageToggler
} // namespace app::classes::types
