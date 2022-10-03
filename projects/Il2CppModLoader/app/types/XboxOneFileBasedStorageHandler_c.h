#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneFileBasedStorageHandler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneFileBasedStorageHandler_c__Class** type_info;
        inline app::XboxOneFileBasedStorageHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneFileBasedStorageHandler_c__Class>(type_info, "frameworks.xboxLive", "XboxOneFileBasedStorageHandler", "<>c");
        }
        inline app::XboxOneFileBasedStorageHandler_c* create() {
            return il2cpp::create_object<app::XboxOneFileBasedStorageHandler_c>(get_class());
        }
    } // namespace XboxOneFileBasedStorageHandler_c
} // namespace app::classes::types
