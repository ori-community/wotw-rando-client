#pragma once
#include <Modloader/app/structs/GeneratedByOldBindingsGeneratorAttribute.h>
#include <Modloader/app/structs/GeneratedByOldBindingsGeneratorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneratedByOldBindingsGeneratorAttribute {
        inline app::GeneratedByOldBindingsGeneratorAttribute__Class** type_info() {
            static app::GeneratedByOldBindingsGeneratorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GeneratedByOldBindingsGeneratorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GeneratedByOldBindingsGeneratorAttribute__Class* get_class() {
            return il2cpp::get_class<app::GeneratedByOldBindingsGeneratorAttribute__Class>(type_info(), "UnityEngine.Scripting", "GeneratedByOldBindingsGeneratorAttribute");
        }
        inline app::GeneratedByOldBindingsGeneratorAttribute* create() {
            return il2cpp::create_object<app::GeneratedByOldBindingsGeneratorAttribute>(get_class());
        }
    } // namespace GeneratedByOldBindingsGeneratorAttribute
} // namespace app::classes::types
