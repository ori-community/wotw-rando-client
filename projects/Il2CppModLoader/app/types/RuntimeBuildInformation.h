#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeBuildInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeBuildInformation__Class** type_info;
        inline app::RuntimeBuildInformation__Class* get_class() {
            return il2cpp::get_class<app::RuntimeBuildInformation__Class>(type_info, "", "RuntimeBuildInformation");
        }
        inline app::RuntimeBuildInformation* create() {
            return il2cpp::create_object<app::RuntimeBuildInformation>(get_class());
        }
    } // namespace RuntimeBuildInformation
} // namespace app::classes::types
