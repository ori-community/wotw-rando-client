#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadProgressChangedEventHandler {
        inline app::UploadProgressChangedEventHandler__Class** type_info = (app::UploadProgressChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0477E9E0));
        inline app::UploadProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadProgressChangedEventHandler__Class>(type_info, "System.Net", "UploadProgressChangedEventHandler");
        }
        inline app::UploadProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::UploadProgressChangedEventHandler>(get_class());
        }
    } // namespace UploadProgressChangedEventHandler
} // namespace app::classes::types
