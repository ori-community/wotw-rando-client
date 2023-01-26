#pragma once
#include <Modloader/app/structs/EHTMLMouseButton__Enum.h>
#include <Modloader/app/structs/EHTMLMouseButton__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EHTMLMouseButton__Enum {
        inline app::EHTMLMouseButton__Enum__Class** type_info() {
            static app::EHTMLMouseButton__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EHTMLMouseButton__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EHTMLMouseButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTMLMouseButton__Enum__Class>(type_info(), "Steamworks", "EHTMLMouseButton");
        }
        inline app::EHTMLMouseButton__Enum* create() {
            return il2cpp::create_object<app::EHTMLMouseButton__Enum>(get_class());
        }
    } // namespace EHTMLMouseButton__Enum
} // namespace app::classes::types
