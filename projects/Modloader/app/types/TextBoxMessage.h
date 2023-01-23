#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextBoxMessage__Class.h>
#include <Modloader/app/structs/TextBoxMessage.h>

namespace app::classes::types {
    namespace TextBoxMessage {
        namespace {
            inline app::TextBoxMessage__Class* type_info_ref = nullptr;
        }
        inline app::TextBoxMessage__Class** type_info = &type_info_ref;
        inline app::TextBoxMessage__Class* get_class() {
            return il2cpp::get_class<app::TextBoxMessage__Class>(type_info, "", "TextBoxMessage");
        }
        inline app::TextBoxMessage* create() {
            return il2cpp::create_object<app::TextBoxMessage>(get_class());
        }
    } // namespace TextBoxMessage
} // namespace app::classes::types
