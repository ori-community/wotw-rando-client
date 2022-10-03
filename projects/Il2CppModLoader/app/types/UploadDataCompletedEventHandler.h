#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadDataCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadDataCompletedEventHandler__Class** type_info;
        inline app::UploadDataCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadDataCompletedEventHandler__Class>(type_info, "System.Net", "UploadDataCompletedEventHandler");
        }
        inline app::UploadDataCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadDataCompletedEventHandler>(get_class());
        }
    } // namespace UploadDataCompletedEventHandler
} // namespace app::classes::types
