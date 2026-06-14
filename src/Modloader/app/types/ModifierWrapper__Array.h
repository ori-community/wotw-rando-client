#pragma once
#include <Modloader/app/structs/ModifierWrapper__Array.h>
#include <Modloader/app/structs/ModifierWrapper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifierWrapper__Array {
        inline app::ModifierWrapper__Array__Class** type_info() {
            static app::ModifierWrapper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModifierWrapper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModifierWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::ModifierWrapper__Array__Class>(type_info(), "Moon.ArtOptimization", "ModifierWrapper[]");
        }
        inline app::ModifierWrapper__Array* create() {
            return il2cpp::create_object<app::ModifierWrapper__Array>(get_class());
        }
    } // namespace ModifierWrapper__Array
} // namespace app::classes::types
