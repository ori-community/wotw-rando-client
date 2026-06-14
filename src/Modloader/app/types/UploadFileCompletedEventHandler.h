#pragma once
#include <Modloader/app/structs/UploadFileCompletedEventHandler.h>
#include <Modloader/app/structs/UploadFileCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadFileCompletedEventHandler {
        inline app::UploadFileCompletedEventHandler__Class** type_info() {
            static app::UploadFileCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadFileCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04766CE0));
            }
            return cache;
        }
        inline app::UploadFileCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadFileCompletedEventHandler__Class>(type_info(), "System.Net", "UploadFileCompletedEventHandler");
        }
        inline app::UploadFileCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadFileCompletedEventHandler>(get_class());
        }
    } // namespace UploadFileCompletedEventHandler
} // namespace app::classes::types
