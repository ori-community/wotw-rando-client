#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletSkinning2DModifier {
        namespace {
            app::VerletSkinning2DModifier__Class* type_info_ref = nullptr;
        }
        app::VerletSkinning2DModifier__Class** type_info = &type_info_ref;
        inline app::VerletSkinning2DModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinning2DModifier__Class>(type_info, "", "VerletSkinning2DModifier");
        }
        inline app::VerletSkinning2DModifier* create() {
            return il2cpp::create_object<app::VerletSkinning2DModifier>(get_class());
        }
        inline app::VerletSkinning2DModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletSkinning2DModifier__Array>(get_class(), size);
        }
    } // namespace VerletSkinning2DModifier
} // namespace app::classes::types
