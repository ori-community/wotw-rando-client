#pragma once
#include <Modloader/app/structs/EditorBrowsableState__Enum.h>
#include <Modloader/app/structs/EditorBrowsableState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorBrowsableState__Enum {
        inline app::EditorBrowsableState__Enum__Class** type_info() {
            static app::EditorBrowsableState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EditorBrowsableState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EditorBrowsableState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EditorBrowsableState__Enum__Class>(type_info(), "System.ComponentModel", "EditorBrowsableState");
        }
        inline app::EditorBrowsableState__Enum* create() {
            return il2cpp::create_object<app::EditorBrowsableState__Enum>(get_class());
        }
    } // namespace EditorBrowsableState__Enum
} // namespace app::classes::types
