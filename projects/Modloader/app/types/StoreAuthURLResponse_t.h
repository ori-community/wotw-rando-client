#pragma once
#include <Modloader/app/structs/StoreAuthURLResponse_t.h>
#include <Modloader/app/structs/StoreAuthURLResponse_t__Boxed.h>
#include <Modloader/app/structs/StoreAuthURLResponse_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreAuthURLResponse_t {
        inline app::StoreAuthURLResponse_t__Class** type_info() {
            static app::StoreAuthURLResponse_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StoreAuthURLResponse_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StoreAuthURLResponse_t__Class* get_class() {
            return il2cpp::get_class<app::StoreAuthURLResponse_t__Class>(type_info(), "Steamworks", "StoreAuthURLResponse_t");
        }
        inline app::StoreAuthURLResponse_t* create() {
            return il2cpp::create_object<app::StoreAuthURLResponse_t>(get_class());
        }
        inline app::StoreAuthURLResponse_t__Boxed* box(app::StoreAuthURLResponse_t value) {
            return il2cpp::box_value<app::StoreAuthURLResponse_t__Boxed>(get_class(), value);
        }
    } // namespace StoreAuthURLResponse_t
} // namespace app::classes::types
