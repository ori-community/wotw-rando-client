#pragma once
#include <Modloader/app/structs/TextBoxMessage.h>
#include <Modloader/app/structs/TextBoxMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxMessage {
        inline app::TextBoxMessage__Class** type_info() {
            static app::TextBoxMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBoxMessage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBoxMessage__Class* get_class() {
            return il2cpp::get_class<app::TextBoxMessage__Class>(type_info(), "", "TextBoxMessage");
        }
        inline app::TextBoxMessage* create() {
            return il2cpp::create_object<app::TextBoxMessage>(get_class());
        }
    } // namespace TextBoxMessage
} // namespace app::classes::types
