#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IJsonLineInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IJsonLineInfo__Class** type_info;
        inline app::IJsonLineInfo__Class* get_class() {
            return il2cpp::get_class<app::IJsonLineInfo__Class>(type_info, "Newtonsoft.Json", "IJsonLineInfo");
        }
        inline app::IJsonLineInfo* create() {
            return il2cpp::create_object<app::IJsonLineInfo>(get_class());
        }
    } // namespace IJsonLineInfo
} // namespace app::classes::types
