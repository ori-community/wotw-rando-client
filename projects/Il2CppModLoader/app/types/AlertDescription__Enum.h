#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlertDescription__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AlertDescription__Enum__Class** type_info;
        inline app::AlertDescription__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlertDescription__Enum__Class>(type_info, "Mono.Security.Interface", "AlertDescription");
        }
        inline app::AlertDescription__Enum* create() {
            return il2cpp::create_object<app::AlertDescription__Enum>(get_class());
        }
    } // namespace AlertDescription__Enum
} // namespace app::classes::types
