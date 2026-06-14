#pragma once
#include <Modloader/app/structs/XGameSaveBlobInfoCallback.h>
#include <Modloader/app/structs/XGameSaveBlobInfoCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfoCallback {
        inline app::XGameSaveBlobInfoCallback__Class** type_info() {
            static app::XGameSaveBlobInfoCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XGameSaveBlobInfoCallback__Class**)(modloader::win::memory::resolve_rva(0x04700EE8));
            }
            return cache;
        }
        inline app::XGameSaveBlobInfoCallback__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfoCallback__Class>(type_info(), "XGamingRuntime.Interop", "XGameSaveBlobInfoCallback");
        }
        inline app::XGameSaveBlobInfoCallback* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfoCallback>(get_class());
        }
    } // namespace XGameSaveBlobInfoCallback
} // namespace app::classes::types
