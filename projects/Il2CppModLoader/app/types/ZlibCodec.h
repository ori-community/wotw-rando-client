#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZlibCodec {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ZlibCodec__Class** type_info;
        inline app::ZlibCodec__Class* get_class() {
            return il2cpp::get_class<app::ZlibCodec__Class>(type_info, "Ionic.Zlib", "ZlibCodec");
        }
        inline app::ZlibCodec* create() {
            return il2cpp::create_object<app::ZlibCodec>(get_class());
        }
    } // namespace ZlibCodec
} // namespace app::classes::types
