#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetReplays {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetReplays__Class** type_info;
        inline app::GetReplays__Class* get_class() {
            return il2cpp::get_class<app::GetReplays__Class>(type_info, "", "GetReplays");
        }
        inline app::GetReplays* create() {
            return il2cpp::create_object<app::GetReplays>(get_class());
        }
    } // namespace GetReplays
} // namespace app::classes::types
