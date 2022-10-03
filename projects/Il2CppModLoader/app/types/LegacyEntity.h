#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEntity {
        namespace {
            app::LegacyEntity__Class* type_info_ref = nullptr;
        }
        app::LegacyEntity__Class** type_info = &type_info_ref;
        inline app::LegacyEntity__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntity__Class>(type_info, "", "LegacyEntity");
        }
        inline app::LegacyEntity* create() {
            return il2cpp::create_object<app::LegacyEntity>(get_class());
        }
        inline app::LegacyEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyEntity__Array>(get_class(), size);
        }
    } // namespace LegacyEntity
} // namespace app::classes::types
