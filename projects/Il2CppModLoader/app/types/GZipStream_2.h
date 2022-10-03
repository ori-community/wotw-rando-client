#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GZipStream_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GZipStream_2__Class** type_info;
        inline app::GZipStream_2__Class* get_class() {
            return il2cpp::get_class<app::GZipStream_2__Class>(type_info, "Unity.IO.Compression", "GZipStream");
        }
        inline app::GZipStream_2* create() {
            return il2cpp::create_object<app::GZipStream_2>(get_class());
        }
    } // namespace GZipStream_2
} // namespace app::classes::types
