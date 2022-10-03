#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XProgressState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XProgressState__Enum__Class** type_info;
        inline app::XProgressState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XProgressState__Enum__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XProgressState");
        }
        inline app::XProgressState__Enum* create() {
            return il2cpp::create_object<app::XProgressState__Enum>(get_class());
        }
    } // namespace XProgressState__Enum
} // namespace app::classes::types
