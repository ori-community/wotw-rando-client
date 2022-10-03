#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServiceNameStore {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServiceNameStore__Class** type_info;
        inline app::ServiceNameStore__Class* get_class() {
            return il2cpp::get_class<app::ServiceNameStore__Class>(type_info, "System.Net", "ServiceNameStore");
        }
        inline app::ServiceNameStore* create() {
            return il2cpp::create_object<app::ServiceNameStore>(get_class());
        }
    } // namespace ServiceNameStore
} // namespace app::classes::types
