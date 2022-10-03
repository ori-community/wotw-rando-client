#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SharedInformation__Class** type_info;
        inline app::SharedInformation__Class* get_class() {
            return il2cpp::get_class<app::SharedInformation__Class>(type_info, "", "SharedInformation");
        }
        inline app::SharedInformation* create() {
            return il2cpp::create_object<app::SharedInformation>(get_class());
        }
    } // namespace SharedInformation
} // namespace app::classes::types
