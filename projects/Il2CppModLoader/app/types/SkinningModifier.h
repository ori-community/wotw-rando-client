#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkinningModifier {
        namespace {
            app::SkinningModifier__Class* type_info_ref = nullptr;
        }
        app::SkinningModifier__Class** type_info = &type_info_ref;
        inline app::SkinningModifier__Class* get_class() {
            return il2cpp::get_class<app::SkinningModifier__Class>(type_info, "", "SkinningModifier");
        }
        inline app::SkinningModifier* create() {
            return il2cpp::create_object<app::SkinningModifier>(get_class());
        }
        inline app::SkinningModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinningModifier__Array>(get_class(), size);
        }
        inline app::SkinningModifier__Array* create_array(const std::vector<app::SkinningModifier*>& items) {
            return il2cpp::array_new<app::SkinningModifier__Array>(get_class(), items);
        }
    } // namespace SkinningModifier
} // namespace app::classes::types
