#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicDataLinkUtils__Class** type_info;
        inline app::DynamicDataLinkUtils__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataLinkUtils__Class>(type_info, "Moon", "DynamicDataLinkUtils");
        }
        inline app::DynamicDataLinkUtils* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils>(get_class());
        }
    } // namespace DynamicDataLinkUtils
} // namespace app::classes::types
