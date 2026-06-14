#pragma once
#include <Modloader/app/structs/GenerateAOTDataAttribute.h>
#include <Modloader/app/structs/GenerateAOTDataAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenerateAOTDataAttribute {
        inline app::GenerateAOTDataAttribute__Class** type_info() {
            static app::GenerateAOTDataAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenerateAOTDataAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenerateAOTDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::GenerateAOTDataAttribute__Class>(type_info(), "Moon", "GenerateAOTDataAttribute");
        }
        inline app::GenerateAOTDataAttribute* create() {
            return il2cpp::create_object<app::GenerateAOTDataAttribute>(get_class());
        }
    } // namespace GenerateAOTDataAttribute
} // namespace app::classes::types
