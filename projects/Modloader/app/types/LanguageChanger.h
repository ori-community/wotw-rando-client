#pragma once
#include <Modloader/app/structs/LanguageChanger.h>
#include <Modloader/app/structs/LanguageChanger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LanguageChanger {
        inline app::LanguageChanger__Class** type_info() {
            static app::LanguageChanger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LanguageChanger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LanguageChanger__Class* get_class() {
            return il2cpp::get_class<app::LanguageChanger__Class>(type_info(), "", "LanguageChanger");
        }
        inline app::LanguageChanger* create() {
            return il2cpp::create_object<app::LanguageChanger>(get_class());
        }
    } // namespace LanguageChanger
} // namespace app::classes::types
