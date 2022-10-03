#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkLogger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkLogger__Class** type_info;
        inline app::AkLogger__Class* get_class() {
            return il2cpp::get_class<app::AkLogger__Class>(type_info, "", "AkLogger");
        }
        inline app::AkLogger* create() {
            return il2cpp::create_object<app::AkLogger>(get_class());
        }
    } // namespace AkLogger
} // namespace app::classes::types
