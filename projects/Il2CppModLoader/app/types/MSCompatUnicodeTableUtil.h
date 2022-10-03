#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTableUtil {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MSCompatUnicodeTableUtil__Class** type_info;
        inline app::MSCompatUnicodeTableUtil__Class* get_class() {
            return il2cpp::get_class<app::MSCompatUnicodeTableUtil__Class>(type_info, "Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil");
        }
        inline app::MSCompatUnicodeTableUtil* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTableUtil>(get_class());
        }
    } // namespace MSCompatUnicodeTableUtil
} // namespace app::classes::types
