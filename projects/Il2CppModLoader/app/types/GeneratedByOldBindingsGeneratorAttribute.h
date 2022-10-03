#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GeneratedByOldBindingsGeneratorAttribute {
        namespace {
            app::GeneratedByOldBindingsGeneratorAttribute__Class* type_info_ref = nullptr;
        }
        app::GeneratedByOldBindingsGeneratorAttribute__Class** type_info = &type_info_ref;
        inline app::GeneratedByOldBindingsGeneratorAttribute__Class* get_class() {
            return il2cpp::get_class<app::GeneratedByOldBindingsGeneratorAttribute__Class>(type_info, "UnityEngine.Scripting", "GeneratedByOldBindingsGeneratorAttribute");
        }
        inline app::GeneratedByOldBindingsGeneratorAttribute* create() {
            return il2cpp::create_object<app::GeneratedByOldBindingsGeneratorAttribute>(get_class());
        }
    } // namespace GeneratedByOldBindingsGeneratorAttribute
} // namespace app::classes::types
