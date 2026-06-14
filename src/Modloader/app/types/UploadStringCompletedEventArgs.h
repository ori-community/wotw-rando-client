#pragma once
#include <Modloader/app/structs/UploadStringCompletedEventArgs.h>
#include <Modloader/app/structs/UploadStringCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadStringCompletedEventArgs {
        inline app::UploadStringCompletedEventArgs__Class** type_info() {
            static app::UploadStringCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadStringCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472F210));
            }
            return cache;
        }
        inline app::UploadStringCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadStringCompletedEventArgs__Class>(type_info(), "System.Net", "UploadStringCompletedEventArgs");
        }
        inline app::UploadStringCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadStringCompletedEventArgs>(get_class());
        }
    } // namespace UploadStringCompletedEventArgs
} // namespace app::classes::types
