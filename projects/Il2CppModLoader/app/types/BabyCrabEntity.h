#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyCrabEntity {
        namespace {
            app::BabyCrabEntity__Class* type_info_ref = nullptr;
        }
        app::BabyCrabEntity__Class** type_info = &type_info_ref;
        inline app::BabyCrabEntity__Class* get_class() {
            return il2cpp::get_class<app::BabyCrabEntity__Class>(type_info, "", "BabyCrabEntity");
        }
        inline app::BabyCrabEntity* create() {
            return il2cpp::create_object<app::BabyCrabEntity>(get_class());
        }
        inline app::BabyCrabEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::BabyCrabEntity__Array>(get_class(), size);
        }
    } // namespace BabyCrabEntity
} // namespace app::classes::types
