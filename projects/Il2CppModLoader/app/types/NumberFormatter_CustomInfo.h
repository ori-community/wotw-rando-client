#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NumberFormatter_CustomInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NumberFormatter_CustomInfo__Class** type_info;
        inline app::NumberFormatter_CustomInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::NumberFormatter_CustomInfo__Class>(type_info, "System", "NumberFormatter", "CustomInfo");
        }
        inline app::NumberFormatter_CustomInfo* create() {
            return il2cpp::create_object<app::NumberFormatter_CustomInfo>(get_class());
        }
    } // namespace NumberFormatter_CustomInfo
} // namespace app::classes::types
