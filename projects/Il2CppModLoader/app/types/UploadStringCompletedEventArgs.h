#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadStringCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadStringCompletedEventArgs__Class** type_info;
        inline app::UploadStringCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadStringCompletedEventArgs__Class>(type_info, "System.Net", "UploadStringCompletedEventArgs");
        }
        inline app::UploadStringCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadStringCompletedEventArgs>(get_class());
        }
    } // namespace UploadStringCompletedEventArgs
} // namespace app::classes::types
