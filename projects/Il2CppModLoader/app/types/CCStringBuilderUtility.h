#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCStringBuilderUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCStringBuilderUtility__Class** type_info;
        inline app::CCStringBuilderUtility__Class* get_class() {
            return il2cpp::get_class<app::CCStringBuilderUtility__Class>(type_info, "", "CCStringBuilderUtility");
        }
        inline app::CCStringBuilderUtility* create() {
            return il2cpp::create_object<app::CCStringBuilderUtility>(get_class());
        }
    } // namespace CCStringBuilderUtility
} // namespace app::classes::types
