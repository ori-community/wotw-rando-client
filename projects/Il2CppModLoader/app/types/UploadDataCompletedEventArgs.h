#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadDataCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadDataCompletedEventArgs__Class** type_info;
        inline app::UploadDataCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadDataCompletedEventArgs__Class>(type_info, "System.Net", "UploadDataCompletedEventArgs");
        }
        inline app::UploadDataCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadDataCompletedEventArgs>(get_class());
        }
    } // namespace UploadDataCompletedEventArgs
} // namespace app::classes::types
