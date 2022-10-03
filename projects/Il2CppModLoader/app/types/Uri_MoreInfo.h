#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Uri_MoreInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Uri_MoreInfo__Class** type_info;
        inline app::Uri_MoreInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_MoreInfo__Class>(type_info, "System", "Uri", "MoreInfo");
        }
        inline app::Uri_MoreInfo* create() {
            return il2cpp::create_object<app::Uri_MoreInfo>(get_class());
        }
    } // namespace Uri_MoreInfo
} // namespace app::classes::types
