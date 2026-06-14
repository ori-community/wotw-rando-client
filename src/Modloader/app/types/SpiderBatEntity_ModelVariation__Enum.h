#pragma once
#include <Modloader/app/structs/SpiderBatEntity_ModelVariation__Enum.h>
#include <Modloader/app/structs/SpiderBatEntity_ModelVariation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity_ModelVariation__Enum {
        inline app::SpiderBatEntity_ModelVariation__Enum__Class** type_info() {
            static app::SpiderBatEntity_ModelVariation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatEntity_ModelVariation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatEntity_ModelVariation__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_ModelVariation__Enum__Class>(type_info(), "", "SpiderBatEntity", "ModelVariation");
        }
        inline app::SpiderBatEntity_ModelVariation__Enum* create() {
            return il2cpp::create_object<app::SpiderBatEntity_ModelVariation__Enum>(get_class());
        }
    } // namespace SpiderBatEntity_ModelVariation__Enum
} // namespace app::classes::types
