#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneRichPresence_Level__Enum {
        namespace {
            app::XboxOneRichPresence_Level__Enum__Class* type_info_ref = nullptr;
        }
        app::XboxOneRichPresence_Level__Enum__Class** type_info = &type_info_ref;
        inline app::XboxOneRichPresence_Level__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneRichPresence_Level__Enum__Class>(type_info, "", "XboxOneRichPresence", "Level");
        }
        inline app::XboxOneRichPresence_Level__Enum* create() {
            return il2cpp::create_object<app::XboxOneRichPresence_Level__Enum>(get_class());
        }
    } // namespace XboxOneRichPresence_Level__Enum
} // namespace app::classes::types
