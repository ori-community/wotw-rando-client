#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity_ModelVariation__Enum {
        namespace {
            app::SpiderBatEntity_ModelVariation__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiderBatEntity_ModelVariation__Enum__Class** type_info = &type_info_ref;
        inline app::SpiderBatEntity_ModelVariation__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_ModelVariation__Enum__Class>(type_info, "", "SpiderBatEntity", "ModelVariation");
        }
        inline app::SpiderBatEntity_ModelVariation__Enum* create() {
            return il2cpp::create_object<app::SpiderBatEntity_ModelVariation__Enum>(get_class());
        }
    } // namespace SpiderBatEntity_ModelVariation__Enum
} // namespace app::classes::types
