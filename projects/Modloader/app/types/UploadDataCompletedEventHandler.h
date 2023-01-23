#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UploadDataCompletedEventHandler__Class.h>
#include <Modloader/app/structs/UploadDataCompletedEventHandler.h>

namespace app::classes::types {
    namespace UploadDataCompletedEventHandler {
        inline app::UploadDataCompletedEventHandler__Class** type_info = (app::UploadDataCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047769B0));
        inline app::UploadDataCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadDataCompletedEventHandler__Class>(type_info, "System.Net", "UploadDataCompletedEventHandler");
        }
        inline app::UploadDataCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadDataCompletedEventHandler>(get_class());
        }
    } // namespace UploadDataCompletedEventHandler
} // namespace app::classes::types
