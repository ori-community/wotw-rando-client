#pragma once
#include <Modloader/app/structs/EHTMLKeyModifiers__Enum.h>
#include <Modloader/app/structs/EHTMLKeyModifiers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EHTMLKeyModifiers__Enum {
        inline app::EHTMLKeyModifiers__Enum__Class** type_info() {
            static app::EHTMLKeyModifiers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EHTMLKeyModifiers__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EHTMLKeyModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTMLKeyModifiers__Enum__Class>(type_info(), "Steamworks", "EHTMLKeyModifiers");
        }
        inline app::EHTMLKeyModifiers__Enum* create() {
            return il2cpp::create_object<app::EHTMLKeyModifiers__Enum>(get_class());
        }
    } // namespace EHTMLKeyModifiers__Enum
} // namespace app::classes::types
