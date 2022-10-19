#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
