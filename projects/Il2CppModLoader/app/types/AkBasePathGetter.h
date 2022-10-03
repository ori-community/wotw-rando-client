#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkBasePathGetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkBasePathGetter__Class** type_info;
        inline app::AkBasePathGetter__Class* get_class() {
            return il2cpp::get_class<app::AkBasePathGetter__Class>(type_info, "", "AkBasePathGetter");
        }
        inline app::AkBasePathGetter* create() {
            return il2cpp::create_object<app::AkBasePathGetter>(get_class());
        }
    } // namespace AkBasePathGetter
} // namespace app::classes::types
