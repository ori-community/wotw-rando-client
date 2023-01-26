#pragma once
#include <Modloader/app/structs/DlcInstalled_t.h>
#include <Modloader/app/structs/DlcInstalled_t__Boxed.h>
#include <Modloader/app/structs/DlcInstalled_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DlcInstalled_t {
        inline app::DlcInstalled_t__Class** type_info() {
            static app::DlcInstalled_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DlcInstalled_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DlcInstalled_t__Class* get_class() {
            return il2cpp::get_class<app::DlcInstalled_t__Class>(type_info(), "Steamworks", "DlcInstalled_t");
        }
        inline app::DlcInstalled_t* create() {
            return il2cpp::create_object<app::DlcInstalled_t>(get_class());
        }
        inline app::DlcInstalled_t__Boxed* box(app::DlcInstalled_t value) {
            return il2cpp::box_value<app::DlcInstalled_t__Boxed>(get_class(), value);
        }
    } // namespace DlcInstalled_t
} // namespace app::classes::types
