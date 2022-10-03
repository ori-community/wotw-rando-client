#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfoCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveBlobInfoCallback__Class** type_info;
        inline app::XGameSaveBlobInfoCallback__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfoCallback__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveBlobInfoCallback");
        }
        inline app::XGameSaveBlobInfoCallback* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfoCallback>(get_class());
        }
    } // namespace XGameSaveBlobInfoCallback
} // namespace app::classes::types
