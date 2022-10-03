#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalUserChangeType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalUserChangeType__Enum__Class** type_info;
        inline app::XalUserChangeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalUserChangeType__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUserChangeType");
        }
        inline app::XalUserChangeType__Enum* create() {
            return il2cpp::create_object<app::XalUserChangeType__Enum>(get_class());
        }
    } // namespace XalUserChangeType__Enum
} // namespace app::classes::types
