#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormatUsage__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FormatUsage__Enum__Class** type_info;
        inline app::FormatUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatUsage__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "FormatUsage");
        }
        inline app::FormatUsage__Enum* create() {
            return il2cpp::create_object<app::FormatUsage__Enum>(get_class());
        }
    } // namespace FormatUsage__Enum
} // namespace app::classes::types
