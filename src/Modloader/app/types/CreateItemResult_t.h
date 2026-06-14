#pragma once
#include <Modloader/app/structs/CreateItemResult_t.h>
#include <Modloader/app/structs/CreateItemResult_t__Boxed.h>
#include <Modloader/app/structs/CreateItemResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateItemResult_t {
        inline app::CreateItemResult_t__Class** type_info() {
            static app::CreateItemResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateItemResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateItemResult_t__Class* get_class() {
            return il2cpp::get_class<app::CreateItemResult_t__Class>(type_info(), "Steamworks", "CreateItemResult_t");
        }
        inline app::CreateItemResult_t* create() {
            return il2cpp::create_object<app::CreateItemResult_t>(get_class());
        }
        inline app::CreateItemResult_t__Boxed* box(app::CreateItemResult_t value) {
            return il2cpp::box_value<app::CreateItemResult_t__Boxed>(get_class(), value);
        }
    } // namespace CreateItemResult_t
} // namespace app::classes::types
