#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWrappedCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWrappedCollection__Class** type_info;
        inline app::IWrappedCollection__Class* get_class() {
            return il2cpp::get_class<app::IWrappedCollection__Class>(type_info, "Newtonsoft.Json.Utilities", "IWrappedCollection");
        }
        inline app::IWrappedCollection* create() {
            return il2cpp::create_object<app::IWrappedCollection>(get_class());
        }
    } // namespace IWrappedCollection
} // namespace app::classes::types
