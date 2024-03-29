#pragma once
#include <Modloader/app/structs/UploadFileCompletedEventArgs.h>
#include <Modloader/app/structs/UploadFileCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadFileCompletedEventArgs {
        inline app::UploadFileCompletedEventArgs__Class** type_info() {
            static app::UploadFileCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadFileCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476CAF8));
            }
            return cache;
        }
        inline app::UploadFileCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadFileCompletedEventArgs__Class>(type_info(), "System.Net", "UploadFileCompletedEventArgs");
        }
        inline app::UploadFileCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadFileCompletedEventArgs>(get_class());
        }
    } // namespace UploadFileCompletedEventArgs
} // namespace app::classes::types
