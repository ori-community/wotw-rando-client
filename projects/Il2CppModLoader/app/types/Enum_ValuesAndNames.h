#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Enum_ValuesAndNames {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Enum_ValuesAndNames__Class** type_info;
        inline app::Enum_ValuesAndNames__Class* get_class() {
            return il2cpp::get_nested_class<app::Enum_ValuesAndNames__Class>(type_info, "System", "Enum", "ValuesAndNames");
        }
        inline app::Enum_ValuesAndNames* create() {
            return il2cpp::create_object<app::Enum_ValuesAndNames>(get_class());
        }
    } // namespace Enum_ValuesAndNames
} // namespace app::classes::types
