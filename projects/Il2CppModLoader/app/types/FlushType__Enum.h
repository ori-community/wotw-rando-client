#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlushType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlushType__Enum__Class** type_info;
        inline app::FlushType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FlushType__Enum__Class>(type_info, "Ionic.Zlib", "FlushType");
        }
        inline app::FlushType__Enum* create() {
            return il2cpp::create_object<app::FlushType__Enum>(get_class());
        }
    } // namespace FlushType__Enum
} // namespace app::classes::types
