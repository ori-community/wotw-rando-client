#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XGameSaveBlob__Array {
        namespace {
            inline app::XGameSaveBlob__Array__Class* type_info_ref = nullptr;
        }
        inline app::XGameSaveBlob__Array__Class** type_info = &type_info_ref;
        inline app::XGameSaveBlob__Array__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlob__Array__Class>(type_info, "XGamingRuntime", "XGameSaveBlob[]");
        }
        inline app::XGameSaveBlob__Array* create() {
            return il2cpp::create_object<app::XGameSaveBlob__Array>(get_class());
        }
    } // namespace XGameSaveBlob__Array
} // namespace app::classes::types
