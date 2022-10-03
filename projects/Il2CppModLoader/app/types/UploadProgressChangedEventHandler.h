#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadProgressChangedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadProgressChangedEventHandler__Class** type_info;
        inline app::UploadProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadProgressChangedEventHandler__Class>(type_info, "System.Net", "UploadProgressChangedEventHandler");
        }
        inline app::UploadProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::UploadProgressChangedEventHandler>(get_class());
        }
    } // namespace UploadProgressChangedEventHandler
} // namespace app::classes::types
