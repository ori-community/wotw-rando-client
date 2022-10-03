#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoFileStorageEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NintendoFileStorageEventHandler__Class** type_info;
        inline app::NintendoFileStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::NintendoFileStorageEventHandler__Class>(type_info, "frameworks.xboxLive", "NintendoFileStorageEventHandler");
        }
        inline app::NintendoFileStorageEventHandler* create() {
            return il2cpp::create_object<app::NintendoFileStorageEventHandler>(get_class());
        }
    } // namespace NintendoFileStorageEventHandler
} // namespace app::classes::types
