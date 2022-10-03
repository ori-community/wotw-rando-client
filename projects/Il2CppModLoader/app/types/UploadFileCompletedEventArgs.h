#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadFileCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadFileCompletedEventArgs__Class** type_info;
        inline app::UploadFileCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadFileCompletedEventArgs__Class>(type_info, "System.Net", "UploadFileCompletedEventArgs");
        }
        inline app::UploadFileCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadFileCompletedEventArgs>(get_class());
        }
    } // namespace UploadFileCompletedEventArgs
} // namespace app::classes::types
