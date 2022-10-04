#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWrappedDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWrappedDictionary__Class** type_info;
        inline app::IWrappedDictionary__Class* get_class() {
            return il2cpp::get_class<app::IWrappedDictionary__Class>(type_info, "Newtonsoft.Json.Utilities", "IWrappedDictionary");
        }
        inline app::IWrappedDictionary* create() {
            return il2cpp::create_object<app::IWrappedDictionary>(get_class());
        }
    } // namespace IWrappedDictionary
} // namespace app::classes::types
