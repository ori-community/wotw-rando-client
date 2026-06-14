#pragma once
#include <Modloader/app/structs/SkinningModifier__Array.h>
#include <Modloader/app/structs/SkinningModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinningModifier__Array {
        inline app::SkinningModifier__Array__Class** type_info() {
            static app::SkinningModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinningModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinningModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinningModifier__Array__Class>(type_info(), "", "SkinningModifier[]");
        }
        inline app::SkinningModifier__Array* create() {
            return il2cpp::create_object<app::SkinningModifier__Array>(get_class());
        }
    } // namespace SkinningModifier__Array
} // namespace app::classes::types
