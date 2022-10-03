#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmallInteractivesPlaceholder_SpawnMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class** type_info;
        inline app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class>(type_info, "", "SmallInteractivesPlaceholder", "SpawnMode");
        }
        inline app::SmallInteractivesPlaceholder_SpawnMode__Enum* create() {
            return il2cpp::create_object<app::SmallInteractivesPlaceholder_SpawnMode__Enum>(get_class());
        }
    } // namespace SmallInteractivesPlaceholder_SpawnMode__Enum
} // namespace app::classes::types
