#pragma once
#include <Modloader/app/structs/VerletSkinning2DModifier.h>
#include <Modloader/app/structs/VerletSkinning2DModifier__Array.h>
#include <Modloader/app/structs/VerletSkinning2DModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletSkinning2DModifier {
        inline app::VerletSkinning2DModifier__Class** type_info() {
            static app::VerletSkinning2DModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletSkinning2DModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletSkinning2DModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinning2DModifier__Class>(type_info(), "", "VerletSkinning2DModifier");
        }
        inline app::VerletSkinning2DModifier* create() {
            return il2cpp::create_object<app::VerletSkinning2DModifier>(get_class());
        }
        inline app::VerletSkinning2DModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletSkinning2DModifier__Array>(get_class(), size);
        }
        inline app::VerletSkinning2DModifier__Array* create_array(const std::vector<app::VerletSkinning2DModifier*>& items) {
            return il2cpp::array_new<app::VerletSkinning2DModifier__Array>(get_class(), items);
        }
    } // namespace VerletSkinning2DModifier
} // namespace app::classes::types
