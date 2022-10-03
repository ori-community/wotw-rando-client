#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServicePoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServicePoint__Class** type_info;
        inline app::ServicePoint__Class* get_class() {
            return il2cpp::get_class<app::ServicePoint__Class>(type_info, "System.Net", "ServicePoint");
        }
        inline app::ServicePoint* create() {
            return il2cpp::create_object<app::ServicePoint>(get_class());
        }
    } // namespace ServicePoint
} // namespace app::classes::types
