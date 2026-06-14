#pragma once
#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#include <Modloader/app/structs/UploadDataCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadDataCompletedEventArgs {
        inline app::UploadDataCompletedEventArgs__Class** type_info() {
            static app::UploadDataCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadDataCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04702050));
            }
            return cache;
        }
        inline app::UploadDataCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadDataCompletedEventArgs__Class>(type_info(), "System.Net", "UploadDataCompletedEventArgs");
        }
        inline app::UploadDataCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadDataCompletedEventArgs>(get_class());
        }
    } // namespace UploadDataCompletedEventArgs
} // namespace app::classes::types
