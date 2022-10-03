#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChunkedInputStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChunkedInputStream__Class** type_info;
        inline app::ChunkedInputStream__Class* get_class() {
            return il2cpp::get_class<app::ChunkedInputStream__Class>(type_info, "System.Net", "ChunkedInputStream");
        }
        inline app::ChunkedInputStream* create() {
            return il2cpp::create_object<app::ChunkedInputStream>(get_class());
        }
    } // namespace ChunkedInputStream
} // namespace app::classes::types
