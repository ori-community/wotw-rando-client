#pragma once
#include <Modloader/app/structs/XboxOneRichPresence_Level__Enum.h>
#include <Modloader/app/structs/XboxOneRichPresence_Level__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneRichPresence_Level__Enum {
        inline app::XboxOneRichPresence_Level__Enum__Class** type_info() {
            static app::XboxOneRichPresence_Level__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxOneRichPresence_Level__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxOneRichPresence_Level__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneRichPresence_Level__Enum__Class>(type_info(), "", "XboxOneRichPresence", "Level");
        }
        inline app::XboxOneRichPresence_Level__Enum* create() {
            return il2cpp::create_object<app::XboxOneRichPresence_Level__Enum>(get_class());
        }
    } // namespace XboxOneRichPresence_Level__Enum
} // namespace app::classes::types
