#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GRDKStorageHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GRDKStorageHandler__Class** type_info;
        inline app::GRDKStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::GRDKStorageHandler__Class>(type_info, "frameworks.xboxLive", "GRDKStorageHandler");
        }
        inline app::GRDKStorageHandler* create() {
            return il2cpp::create_object<app::GRDKStorageHandler>(get_class());
        }
    } // namespace GRDKStorageHandler
} // namespace app::classes::types
