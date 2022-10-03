#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData {
        namespace {
            app::EntityWeightData__Class* type_info_ref = nullptr;
        }
        app::EntityWeightData__Class** type_info = &type_info_ref;
        inline app::EntityWeightData__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightData__Class>(type_info, "", "EntityWeightData");
        }
        inline app::EntityWeightData* create() {
            return il2cpp::create_object<app::EntityWeightData>(get_class());
        }
    } // namespace EntityWeightData
} // namespace app::classes::types
