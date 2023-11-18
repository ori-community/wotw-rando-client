#pragma once
#include <Modloader/app/structs/EItemState__Enum.h>
#include <Modloader/app/structs/EItemState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EItemState__Enum {
        inline app::EItemState__Enum__Class** type_info() {
            static app::EItemState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EItemState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EItemState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EItemState__Enum__Class>(type_info(), "Steamworks", "EItemState");
        }
        inline app::EItemState__Enum* create() {
            return il2cpp::create_object<app::EItemState__Enum>(get_class());
        }
    } // namespace EItemState__Enum
} // namespace app::classes::types
