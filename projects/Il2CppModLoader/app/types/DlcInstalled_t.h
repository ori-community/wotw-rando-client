#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DlcInstalled_t {
        namespace {
            app::DlcInstalled_t__Class* type_info_ref = nullptr;
        }
        app::DlcInstalled_t__Class** type_info = &type_info_ref;
        inline app::DlcInstalled_t__Class* get_class() {
            return il2cpp::get_class<app::DlcInstalled_t__Class>(type_info, "Steamworks", "DlcInstalled_t");
        }
        inline app::DlcInstalled_t* create() {
            return il2cpp::create_object<app::DlcInstalled_t>(get_class());
        }
        inline app::DlcInstalled_t__Boxed* box(app::DlcInstalled_t value) {
            return il2cpp::box_value<app::DlcInstalled_t__Boxed>(get_class(), value);
        }
    } // namespace DlcInstalled_t
} // namespace app::classes::types
