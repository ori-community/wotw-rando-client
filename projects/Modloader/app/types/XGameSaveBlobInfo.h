#pragma once
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#include <Modloader/app/structs/XGameSaveBlobInfo__Boxed.h>
#include <Modloader/app/structs/XGameSaveBlobInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfo {
        inline app::XGameSaveBlobInfo__Class** type_info() {
            static app::XGameSaveBlobInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XGameSaveBlobInfo__Class**)(modloader::win::memory::resolve_rva(0x04770990));
            }
            return cache;
        }
        inline app::XGameSaveBlobInfo__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfo__Class>(type_info(), "XGamingRuntime.Interop", "XGameSaveBlobInfo");
        }
        inline app::XGameSaveBlobInfo* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfo>(get_class());
        }
        inline app::XGameSaveBlobInfo__Boxed* box(app::XGameSaveBlobInfo value) {
            return il2cpp::box_value<app::XGameSaveBlobInfo__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveBlobInfo
} // namespace app::classes::types
