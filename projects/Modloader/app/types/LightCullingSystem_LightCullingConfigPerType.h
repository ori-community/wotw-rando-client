#pragma once
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Array.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Boxed.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingConfigPerType {
        inline app::LightCullingSystem_LightCullingConfigPerType__Class** type_info() {
            static app::LightCullingSystem_LightCullingConfigPerType__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCullingSystem_LightCullingConfigPerType__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingConfigPerType__Class>(type_info(), "", "LightCullingSystem", "LightCullingConfigPerType");
        }
        inline app::LightCullingSystem_LightCullingConfigPerType* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingConfigPerType>(get_class());
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Boxed* box(app::LightCullingSystem_LightCullingConfigPerType value) {
            return il2cpp::box_value<app::LightCullingSystem_LightCullingConfigPerType__Boxed>(get_class(), value);
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCullingSystem_LightCullingConfigPerType__Array>(get_class(), size);
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Array* create_array(const std::vector<app::LightCullingSystem_LightCullingConfigPerType>& items) {
            return il2cpp::array_new<app::LightCullingSystem_LightCullingConfigPerType__Array>(get_class(), items);
        }
    } // namespace LightCullingSystem_LightCullingConfigPerType
} // namespace app::classes::types
