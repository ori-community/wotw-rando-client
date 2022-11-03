#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextEditor_DblClickSnapping__Enum {
        namespace {
            inline app::TextEditor_DblClickSnapping__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextEditor_DblClickSnapping__Enum__Class** type_info = &type_info_ref;
        inline app::TextEditor_DblClickSnapping__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_DblClickSnapping__Enum__Class>(type_info, "UnityEngine", "TextEditor", "DblClickSnapping");
        }
        inline app::TextEditor_DblClickSnapping__Enum* create() {
            return il2cpp::create_object<app::TextEditor_DblClickSnapping__Enum>(get_class());
        }
    } // namespace TextEditor_DblClickSnapping__Enum
} // namespace app::classes::types
