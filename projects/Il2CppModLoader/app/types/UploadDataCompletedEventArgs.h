#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadDataCompletedEventArgs {
        inline app::UploadDataCompletedEventArgs__Class** type_info = (app::UploadDataCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04702050));
        inline app::UploadDataCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadDataCompletedEventArgs__Class>(type_info, "System.Net", "UploadDataCompletedEventArgs");
        }
        inline app::UploadDataCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadDataCompletedEventArgs>(get_class());
        }
    } // namespace UploadDataCompletedEventArgs
} // namespace app::classes::types
