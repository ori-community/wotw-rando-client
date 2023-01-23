#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XGameSaveBlobInfo__Class.h>
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#include <Modloader/app/structs/XGameSaveBlobInfo__Boxed.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfo {
        inline app::XGameSaveBlobInfo__Class** type_info = (app::XGameSaveBlobInfo__Class**)(modloader::win::memory::resolve_rva(0x04770990));
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
