#pragma once
#include <Modloader/app/structs/UploadStringCompletedEventHandler.h>
#include <Modloader/app/structs/UploadStringCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadStringCompletedEventHandler {
        inline app::UploadStringCompletedEventHandler__Class** type_info() {
            static app::UploadStringCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadStringCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0475E6D0));
            }
            return cache;
        }
        inline app::UploadStringCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadStringCompletedEventHandler__Class>(type_info(), "System.Net", "UploadStringCompletedEventHandler");
        }
        inline app::UploadStringCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadStringCompletedEventHandler>(get_class());
        }
    } // namespace UploadStringCompletedEventHandler
} // namespace app::classes::types
