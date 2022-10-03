#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GZipStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GZipStream__Class** type_info;
        inline app::GZipStream__Class* get_class() {
            return il2cpp::get_class<app::GZipStream__Class>(type_info, "System.IO.Compression", "GZipStream");
        }
        inline app::GZipStream* create() {
            return il2cpp::create_object<app::GZipStream>(get_class());
        }
    } // namespace GZipStream
} // namespace app::classes::types
