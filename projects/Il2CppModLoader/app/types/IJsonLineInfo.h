#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IJsonLineInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IJsonLineInfo__Class** type_info;
        inline app::IJsonLineInfo__Class* get_class() {
            return il2cpp::get_class<app::IJsonLineInfo__Class>(type_info, "Newtonsoft.Json", "IJsonLineInfo");
        }
    } // namespace IJsonLineInfo
} // namespace app::classes::types
