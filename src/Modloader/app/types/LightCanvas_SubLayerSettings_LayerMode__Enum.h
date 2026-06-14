#pragma once
#include <Modloader/app/structs/LightCanvas_SubLayerSettings_LayerMode__Enum.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettings_LayerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettings_LayerMode__Enum {
        inline app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class** type_info() {
            static app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SubLayerSettings_LayerMode__Enum__Class>(type_info(), "", "LightCanvas+SubLayerSettings", "LayerMode");
        }
        inline app::LightCanvas_SubLayerSettings_LayerMode__Enum* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettings_LayerMode__Enum>(get_class());
        }
    } // namespace LightCanvas_SubLayerSettings_LayerMode__Enum
} // namespace app::classes::types
