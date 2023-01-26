#pragma once
#include <Modloader/app/structs/EntityWeightData.h>
#include <Modloader/app/structs/EntityWeightData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData {
        inline app::EntityWeightData__Class** type_info() {
            static app::EntityWeightData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityWeightData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityWeightData__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightData__Class>(type_info(), "", "EntityWeightData");
        }
        inline app::EntityWeightData* create() {
            return il2cpp::create_object<app::EntityWeightData>(get_class());
        }
    } // namespace EntityWeightData
} // namespace app::classes::types
