#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadValuesCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadValuesCompletedEventHandler__Class** type_info;
        inline app::UploadValuesCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadValuesCompletedEventHandler__Class>(type_info, "System.Net", "UploadValuesCompletedEventHandler");
        }
        inline app::UploadValuesCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadValuesCompletedEventHandler>(get_class());
        }
    } // namespace UploadValuesCompletedEventHandler
} // namespace app::classes::types
