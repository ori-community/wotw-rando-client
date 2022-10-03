#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZlibBaseStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ZlibBaseStream__Class** type_info;
        inline app::ZlibBaseStream__Class* get_class() {
            return il2cpp::get_class<app::ZlibBaseStream__Class>(type_info, "Ionic.Zlib", "ZlibBaseStream");
        }
        inline app::ZlibBaseStream* create() {
            return il2cpp::create_object<app::ZlibBaseStream>(get_class());
        }
    } // namespace ZlibBaseStream
} // namespace app::classes::types
