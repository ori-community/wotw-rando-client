#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EditorBrowsableState__Enum__Class.h>
#include <Modloader/app/structs/EditorBrowsableState__Enum.h>

namespace app::classes::types {
    namespace EditorBrowsableState__Enum {
        namespace {
            inline app::EditorBrowsableState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EditorBrowsableState__Enum__Class** type_info = &type_info_ref;
        inline app::EditorBrowsableState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EditorBrowsableState__Enum__Class>(type_info, "System.ComponentModel", "EditorBrowsableState");
        }
        inline app::EditorBrowsableState__Enum* create() {
            return il2cpp::create_object<app::EditorBrowsableState__Enum>(get_class());
        }
    } // namespace EditorBrowsableState__Enum
} // namespace app::classes::types
