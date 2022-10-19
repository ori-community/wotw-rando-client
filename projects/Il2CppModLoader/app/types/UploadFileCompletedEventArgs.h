#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadFileCompletedEventArgs {
        inline app::UploadFileCompletedEventArgs__Class** type_info = (app::UploadFileCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476CAF8));
        inline app::UploadFileCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadFileCompletedEventArgs__Class>(type_info, "System.Net", "UploadFileCompletedEventArgs");
        }
        inline app::UploadFileCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadFileCompletedEventArgs>(get_class());
        }
    } // namespace UploadFileCompletedEventArgs
} // namespace app::classes::types
