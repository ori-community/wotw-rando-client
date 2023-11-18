#pragma once
#include <Modloader/app/structs/MessageBoxLanguageStyles.h>
#include <Modloader/app/structs/MessageBoxLanguageStyles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBoxLanguageStyles {
        inline app::MessageBoxLanguageStyles__Class** type_info() {
            static app::MessageBoxLanguageStyles__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageBoxLanguageStyles__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageBoxLanguageStyles__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxLanguageStyles__Class>(type_info(), "", "MessageBoxLanguageStyles");
        }
        inline app::MessageBoxLanguageStyles* create() {
            return il2cpp::create_object<app::MessageBoxLanguageStyles>(get_class());
        }
    } // namespace MessageBoxLanguageStyles
} // namespace app::classes::types
