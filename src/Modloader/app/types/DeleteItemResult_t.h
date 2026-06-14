#pragma once
#include <Modloader/app/structs/DeleteItemResult_t.h>
#include <Modloader/app/structs/DeleteItemResult_t__Boxed.h>
#include <Modloader/app/structs/DeleteItemResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteItemResult_t {
        inline app::DeleteItemResult_t__Class** type_info() {
            static app::DeleteItemResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeleteItemResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeleteItemResult_t__Class* get_class() {
            return il2cpp::get_class<app::DeleteItemResult_t__Class>(type_info(), "Steamworks", "DeleteItemResult_t");
        }
        inline app::DeleteItemResult_t* create() {
            return il2cpp::create_object<app::DeleteItemResult_t>(get_class());
        }
        inline app::DeleteItemResult_t__Boxed* box(app::DeleteItemResult_t value) {
            return il2cpp::box_value<app::DeleteItemResult_t__Boxed>(get_class(), value);
        }
    } // namespace DeleteItemResult_t
} // namespace app::classes::types
