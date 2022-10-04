#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWrappedCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWrappedCollection__Class** type_info;
        inline app::IWrappedCollection__Class* get_class() {
            return il2cpp::get_class<app::IWrappedCollection__Class>(type_info, "Newtonsoft.Json.Utilities", "IWrappedCollection");
        }
    } // namespace IWrappedCollection
} // namespace app::classes::types
