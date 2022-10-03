#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveBlobInfo__Class** type_info;
        inline app::XGameSaveBlobInfo__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfo__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveBlobInfo");
        }
        inline app::XGameSaveBlobInfo* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfo>(get_class());
        }
        inline app::XGameSaveBlobInfo__Boxed* box(app::XGameSaveBlobInfo value) {
            return il2cpp::box_value<app::XGameSaveBlobInfo__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveBlobInfo
} // namespace app::classes::types
