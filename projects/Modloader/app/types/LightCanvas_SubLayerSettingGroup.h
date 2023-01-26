#pragma once
#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup__Array.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettingGroup {
        inline app::LightCanvas_SubLayerSettingGroup__Class** type_info() {
            static app::LightCanvas_SubLayerSettingGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCanvas_SubLayerSettingGroup__Class**)(modloader::win::memory::resolve_rva(0x04729F10));
            }
            return cache;
        }
        inline app::LightCanvas_SubLayerSettingGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SubLayerSettingGroup__Class>(type_info(), "", "LightCanvas", "SubLayerSettingGroup");
        }
        inline app::LightCanvas_SubLayerSettingGroup* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettingGroup>(get_class());
        }
        inline app::LightCanvas_SubLayerSettingGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvas_SubLayerSettingGroup__Array>(get_class(), size);
        }
        inline app::LightCanvas_SubLayerSettingGroup__Array* create_array(const std::vector<app::LightCanvas_SubLayerSettingGroup*>& items) {
            return il2cpp::array_new<app::LightCanvas_SubLayerSettingGroup__Array>(get_class(), items);
        }
    } // namespace LightCanvas_SubLayerSettingGroup
} // namespace app::classes::types
