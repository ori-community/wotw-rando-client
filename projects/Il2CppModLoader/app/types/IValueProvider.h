#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IValueProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IValueProvider__Class** type_info;
        inline app::IValueProvider__Class* get_class() {
            return il2cpp::get_class<app::IValueProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "IValueProvider");
        }
    } // namespace IValueProvider
} // namespace app::classes::types
