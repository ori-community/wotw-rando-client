#pragma once
#include <Modloader/app/structs/ForceMode2D__Enum.h>
#include <Modloader/app/structs/ForceMode2D__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceMode2D__Enum {
        inline app::ForceMode2D__Enum__Class** type_info() {
            static app::ForceMode2D__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceMode2D__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceMode2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::ForceMode2D__Enum__Class>(type_info(), "UnityEngine", "ForceMode2D");
        }
        inline app::ForceMode2D__Enum* create() {
            return il2cpp::create_object<app::ForceMode2D__Enum>(get_class());
        }
    } // namespace ForceMode2D__Enum
} // namespace app::classes::types
