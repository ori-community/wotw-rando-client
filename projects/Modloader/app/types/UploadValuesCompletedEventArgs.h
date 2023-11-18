#pragma once
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>
#include <Modloader/app/structs/UploadValuesCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadValuesCompletedEventArgs {
        inline app::UploadValuesCompletedEventArgs__Class** type_info() {
            static app::UploadValuesCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadValuesCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04781738));
            }
            return cache;
        }
        inline app::UploadValuesCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadValuesCompletedEventArgs__Class>(type_info(), "System.Net", "UploadValuesCompletedEventArgs");
        }
        inline app::UploadValuesCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadValuesCompletedEventArgs>(get_class());
        }
    } // namespace UploadValuesCompletedEventArgs
} // namespace app::classes::types
