#pragma once
#include <Modloader/app/structs/UploadValuesCompletedEventHandler.h>
#include <Modloader/app/structs/UploadValuesCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadValuesCompletedEventHandler {
        inline app::UploadValuesCompletedEventHandler__Class** type_info() {
            static app::UploadValuesCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadValuesCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04761278));
            }
            return cache;
        }
        inline app::UploadValuesCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadValuesCompletedEventHandler__Class>(type_info(), "System.Net", "UploadValuesCompletedEventHandler");
        }
        inline app::UploadValuesCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadValuesCompletedEventHandler>(get_class());
        }
    } // namespace UploadValuesCompletedEventHandler
} // namespace app::classes::types
