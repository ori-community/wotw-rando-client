#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
