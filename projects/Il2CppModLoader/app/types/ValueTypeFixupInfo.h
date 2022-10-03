#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueTypeFixupInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValueTypeFixupInfo__Class** type_info;
        inline app::ValueTypeFixupInfo__Class* get_class() {
            return il2cpp::get_class<app::ValueTypeFixupInfo__Class>(type_info, "System.Runtime.Serialization", "ValueTypeFixupInfo");
        }
        inline app::ValueTypeFixupInfo* create() {
            return il2cpp::create_object<app::ValueTypeFixupInfo>(get_class());
        }
    } // namespace ValueTypeFixupInfo
} // namespace app::classes::types
