#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtensionDataGetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtensionDataGetter__Class** type_info;
        inline app::ExtensionDataGetter__Class* get_class() {
            return il2cpp::get_class<app::ExtensionDataGetter__Class>(type_info, "Newtonsoft.Json.Serialization", "ExtensionDataGetter");
        }
        inline app::ExtensionDataGetter* create() {
            return il2cpp::create_object<app::ExtensionDataGetter>(get_class());
        }
    } // namespace ExtensionDataGetter
} // namespace app::classes::types
