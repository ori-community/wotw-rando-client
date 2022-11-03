#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityWeightData {
        namespace {
            inline app::EntityWeightData__Class* type_info_ref = nullptr;
        }
        inline app::EntityWeightData__Class** type_info = &type_info_ref;
        inline app::EntityWeightData__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightData__Class>(type_info, "", "EntityWeightData");
        }
        inline app::EntityWeightData* create() {
            return il2cpp::create_object<app::EntityWeightData>(get_class());
        }
    } // namespace EntityWeightData
} // namespace app::classes::types
