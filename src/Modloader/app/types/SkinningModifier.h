#pragma once
#include <Modloader/app/structs/SkinningModifier.h>
#include <Modloader/app/structs/SkinningModifier__Array.h>
#include <Modloader/app/structs/SkinningModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinningModifier {
        inline app::SkinningModifier__Class** type_info() {
            static app::SkinningModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinningModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinningModifier__Class* get_class() {
            return il2cpp::get_class<app::SkinningModifier__Class>(type_info(), "", "SkinningModifier");
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
