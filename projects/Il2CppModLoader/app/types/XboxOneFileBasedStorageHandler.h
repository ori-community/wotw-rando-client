#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneFileBasedStorageHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneFileBasedStorageHandler__Class** type_info;
        inline app::XboxOneFileBasedStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::XboxOneFileBasedStorageHandler__Class>(type_info, "frameworks.xboxLive", "XboxOneFileBasedStorageHandler");
        }
        inline app::XboxOneFileBasedStorageHandler* create() {
            return il2cpp::create_object<app::XboxOneFileBasedStorageHandler>(get_class());
        }
    } // namespace XboxOneFileBasedStorageHandler
} // namespace app::classes::types
