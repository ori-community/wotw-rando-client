#pragma once
#include <Modloader/app/structs/TextBoxIconsFontGenerator.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator {
        inline app::TextBoxIconsFontGenerator__Class** type_info() {
            static app::TextBoxIconsFontGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBoxIconsFontGenerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBoxIconsFontGenerator__Class* get_class() {
            return il2cpp::get_class<app::TextBoxIconsFontGenerator__Class>(type_info(), "", "TextBoxIconsFontGenerator");
        }
        inline app::TextBoxIconsFontGenerator* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator>(get_class());
        }
    } // namespace TextBoxIconsFontGenerator
} // namespace app::classes::types
