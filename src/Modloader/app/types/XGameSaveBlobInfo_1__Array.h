#pragma once
#include <Modloader/app/structs/XGameSaveBlobInfo_1__Array.h>
#include <Modloader/app/structs/XGameSaveBlobInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfo_1__Array {
        inline app::XGameSaveBlobInfo_1__Array__Class** type_info() {
            static app::XGameSaveBlobInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XGameSaveBlobInfo_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XGameSaveBlobInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfo_1__Array__Class>(type_info(), "XGamingRuntime", "XGameSaveBlobInfo[]");
        }
        inline app::XGameSaveBlobInfo_1__Array* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfo_1__Array>(get_class());
        }
    } // namespace XGameSaveBlobInfo_1__Array
} // namespace app::classes::types
