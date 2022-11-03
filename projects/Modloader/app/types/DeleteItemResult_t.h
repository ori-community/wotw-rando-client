#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteItemResult_t {
        namespace {
            inline app::DeleteItemResult_t__Class* type_info_ref = nullptr;
        }
        inline app::DeleteItemResult_t__Class** type_info = &type_info_ref;
        inline app::DeleteItemResult_t__Class* get_class() {
            return il2cpp::get_class<app::DeleteItemResult_t__Class>(type_info, "Steamworks", "DeleteItemResult_t");
        }
        inline app::DeleteItemResult_t* create() {
            return il2cpp::create_object<app::DeleteItemResult_t>(get_class());
        }
        inline app::DeleteItemResult_t__Boxed* box(app::DeleteItemResult_t value) {
            return il2cpp::box_value<app::DeleteItemResult_t__Boxed>(get_class(), value);
        }
    } // namespace DeleteItemResult_t
} // namespace app::classes::types
