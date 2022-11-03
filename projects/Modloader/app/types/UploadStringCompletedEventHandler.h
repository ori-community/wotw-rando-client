#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadStringCompletedEventHandler {
        inline app::UploadStringCompletedEventHandler__Class** type_info = (app::UploadStringCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0475E6D0));
        inline app::UploadStringCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadStringCompletedEventHandler__Class>(type_info, "System.Net", "UploadStringCompletedEventHandler");
        }
        inline app::UploadStringCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadStringCompletedEventHandler>(get_class());
        }
    } // namespace UploadStringCompletedEventHandler
} // namespace app::classes::types
