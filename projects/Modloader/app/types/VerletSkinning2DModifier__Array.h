#pragma once
#include <Modloader/app/structs/VerletSkinning2DModifier__Array.h>
#include <Modloader/app/structs/VerletSkinning2DModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletSkinning2DModifier__Array {
        inline app::VerletSkinning2DModifier__Array__Class** type_info() {
            static app::VerletSkinning2DModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletSkinning2DModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletSkinning2DModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinning2DModifier__Array__Class>(type_info(), "", "VerletSkinning2DModifier[]");
        }
        inline app::VerletSkinning2DModifier__Array* create() {
            return il2cpp::create_object<app::VerletSkinning2DModifier__Array>(get_class());
        }
    } // namespace VerletSkinning2DModifier__Array
} // namespace app::classes::types
