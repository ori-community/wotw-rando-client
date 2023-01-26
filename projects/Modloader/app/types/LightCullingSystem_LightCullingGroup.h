#pragma once
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup__Array.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingGroup {
        inline app::LightCullingSystem_LightCullingGroup__Class** type_info() {
            static app::LightCullingSystem_LightCullingGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCullingSystem_LightCullingGroup__Class**)(modloader::win::memory::resolve_rva(0x04741C80));
            }
            return cache;
        }
        inline app::LightCullingSystem_LightCullingGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingGroup__Class>(type_info(), "", "LightCullingSystem", "LightCullingGroup");
        }
        inline app::LightCullingSystem_LightCullingGroup* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingGroup>(get_class());
        }
        inline app::LightCullingSystem_LightCullingGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCullingSystem_LightCullingGroup__Array>(get_class(), size);
        }
        inline app::LightCullingSystem_LightCullingGroup__Array* create_array(const std::vector<app::LightCullingSystem_LightCullingGroup*>& items) {
            return il2cpp::array_new<app::LightCullingSystem_LightCullingGroup__Array>(get_class(), items);
        }
    } // namespace LightCullingSystem_LightCullingGroup
} // namespace app::classes::types
