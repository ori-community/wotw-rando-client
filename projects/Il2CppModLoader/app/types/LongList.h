#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LongList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LongList__Class** type_info;
        inline app::LongList__Class* get_class() {
            return il2cpp::get_class<app::LongList__Class>(type_info, "System.Runtime.Serialization", "LongList");
        }
        inline app::LongList* create() {
            return il2cpp::create_object<app::LongList>(get_class());
        }
    } // namespace LongList
} // namespace app::classes::types
