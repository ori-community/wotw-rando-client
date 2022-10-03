#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenerateAOTDataAttribute {
        namespace {
            app::GenerateAOTDataAttribute__Class* type_info_ref = nullptr;
        }
        app::GenerateAOTDataAttribute__Class** type_info = &type_info_ref;
        inline app::GenerateAOTDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::GenerateAOTDataAttribute__Class>(type_info, "Moon", "GenerateAOTDataAttribute");
        }
        inline app::GenerateAOTDataAttribute* create() {
            return il2cpp::create_object<app::GenerateAOTDataAttribute>(get_class());
        }
    } // namespace GenerateAOTDataAttribute
} // namespace app::classes::types
