#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadStringCompletedEventArgs {
        inline app::UploadStringCompletedEventArgs__Class** type_info = (app::UploadStringCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472F210));
        inline app::UploadStringCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadStringCompletedEventArgs__Class>(type_info, "System.Net", "UploadStringCompletedEventArgs");
        }
        inline app::UploadStringCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadStringCompletedEventArgs>(get_class());
        }
    } // namespace UploadStringCompletedEventArgs
} // namespace app::classes::types
