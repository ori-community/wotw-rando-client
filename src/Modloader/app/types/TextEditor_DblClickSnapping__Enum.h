#pragma once
#include <Modloader/app/structs/TextEditor_DblClickSnapping__Enum.h>
#include <Modloader/app/structs/TextEditor_DblClickSnapping__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextEditor_DblClickSnapping__Enum {
        inline app::TextEditor_DblClickSnapping__Enum__Class** type_info() {
            static app::TextEditor_DblClickSnapping__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextEditor_DblClickSnapping__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextEditor_DblClickSnapping__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_DblClickSnapping__Enum__Class>(type_info(), "UnityEngine", "TextEditor", "DblClickSnapping");
        }
        inline app::TextEditor_DblClickSnapping__Enum* create() {
            return il2cpp::create_object<app::TextEditor_DblClickSnapping__Enum>(get_class());
        }
    } // namespace TextEditor_DblClickSnapping__Enum
} // namespace app::classes::types
