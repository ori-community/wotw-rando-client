#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfoCallback {
        inline app::XGameSaveBlobInfoCallback__Class** type_info = (app::XGameSaveBlobInfoCallback__Class**)(modloader::win::memory::resolve_rva(0x04700EE8));
        inline app::XGameSaveBlobInfoCallback__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfoCallback__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveBlobInfoCallback");
        }
        inline app::XGameSaveBlobInfoCallback* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfoCallback>(get_class());
        }
    } // namespace XGameSaveBlobInfoCallback
} // namespace app::classes::types
