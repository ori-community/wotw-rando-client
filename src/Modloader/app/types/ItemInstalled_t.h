#pragma once
#include <Modloader/app/structs/ItemInstalled_t.h>
#include <Modloader/app/structs/ItemInstalled_t__Boxed.h>
#include <Modloader/app/structs/ItemInstalled_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemInstalled_t {
        inline app::ItemInstalled_t__Class** type_info() {
            static app::ItemInstalled_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemInstalled_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemInstalled_t__Class* get_class() {
            return il2cpp::get_class<app::ItemInstalled_t__Class>(type_info(), "Steamworks", "ItemInstalled_t");
        }
        inline app::ItemInstalled_t* create() {
            return il2cpp::create_object<app::ItemInstalled_t>(get_class());
        }
        inline app::ItemInstalled_t__Boxed* box(app::ItemInstalled_t value) {
            return il2cpp::box_value<app::ItemInstalled_t__Boxed>(get_class(), value);
        }
    } // namespace ItemInstalled_t
} // namespace app::classes::types
