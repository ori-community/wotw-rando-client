#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarkerEntity {
        namespace {
            app::MarkerEntity__Class* type_info_ref = nullptr;
        }
        app::MarkerEntity__Class** type_info = &type_info_ref;
        inline app::MarkerEntity__Class* get_class() {
            return il2cpp::get_class<app::MarkerEntity__Class>(type_info, "Moon.Timeline", "MarkerEntity");
        }
        inline app::MarkerEntity* create() {
            return il2cpp::create_object<app::MarkerEntity>(get_class());
        }
    } // namespace MarkerEntity
} // namespace app::classes::types
