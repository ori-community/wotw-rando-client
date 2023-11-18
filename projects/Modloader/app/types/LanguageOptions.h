#pragma once
#include <Modloader/app/structs/LanguageOptions.h>
#include <Modloader/app/structs/LanguageOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LanguageOptions {
        inline app::LanguageOptions__Class** type_info() {
            static app::LanguageOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LanguageOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LanguageOptions__Class* get_class() {
            return il2cpp::get_class<app::LanguageOptions__Class>(type_info(), "", "LanguageOptions");
        }
        inline app::LanguageOptions* create() {
            return il2cpp::create_object<app::LanguageOptions>(get_class());
        }
    } // namespace LanguageOptions
} // namespace app::classes::types
