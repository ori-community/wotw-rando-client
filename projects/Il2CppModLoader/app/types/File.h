#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace File {
        extern IL2CPP_MODLOADER_DLLEXPORT app::File__Class** type_info;
        inline app::File__Class* get_class() {
            return il2cpp::get_class<app::File__Class>(type_info, "System.IO", "File");
        }
        inline app::File* create() {
            return il2cpp::create_object<app::File>(get_class());
        }
    } // namespace File
} // namespace app::classes::types
