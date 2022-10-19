#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActiveBeaconsUpdated_t {
        namespace {
            inline app::ActiveBeaconsUpdated_t__Class* type_info_ref = nullptr;
        }
        inline app::ActiveBeaconsUpdated_t__Class** type_info = &type_info_ref;
        inline app::ActiveBeaconsUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::ActiveBeaconsUpdated_t__Class>(type_info, "Steamworks", "ActiveBeaconsUpdated_t");
        }
        inline app::ActiveBeaconsUpdated_t* create() {
            return il2cpp::create_object<app::ActiveBeaconsUpdated_t>(get_class());
        }
        inline app::ActiveBeaconsUpdated_t__Boxed* box(app::ActiveBeaconsUpdated_t value) {
            return il2cpp::box_value<app::ActiveBeaconsUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace ActiveBeaconsUpdated_t
} // namespace app::classes::types
