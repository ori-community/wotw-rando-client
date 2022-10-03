#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZlibException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ZlibException__Class** type_info;
        inline app::ZlibException__Class* get_class() {
            return il2cpp::get_class<app::ZlibException__Class>(type_info, "Ionic.Zlib", "ZlibException");
        }
        inline app::ZlibException* create() {
            return il2cpp::create_object<app::ZlibException>(get_class());
        }
    } // namespace ZlibException
} // namespace app::classes::types
