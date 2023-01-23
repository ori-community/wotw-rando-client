#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UploadValuesCompletedEventArgs__Class.h>
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>

namespace app::classes::types {
    namespace UploadValuesCompletedEventArgs {
        inline app::UploadValuesCompletedEventArgs__Class** type_info = (app::UploadValuesCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04781738));
        inline app::UploadValuesCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UploadValuesCompletedEventArgs__Class>(type_info, "System.Net", "UploadValuesCompletedEventArgs");
        }
        inline app::UploadValuesCompletedEventArgs* create() {
            return il2cpp::create_object<app::UploadValuesCompletedEventArgs>(get_class());
        }
    } // namespace UploadValuesCompletedEventArgs
} // namespace app::classes::types
