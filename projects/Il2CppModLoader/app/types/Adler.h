#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Adler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Adler__Class** type_info;
        inline app::Adler__Class* get_class() {
            return il2cpp::get_class<app::Adler__Class>(type_info, "Ionic.Zlib", "Adler");
        }
        inline app::Adler* create() {
            return il2cpp::create_object<app::Adler>(get_class());
        }
    } // namespace Adler
} // namespace app::classes::types
