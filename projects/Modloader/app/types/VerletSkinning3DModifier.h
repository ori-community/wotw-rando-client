#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletSkinning3DModifier {
        namespace {
            inline app::VerletSkinning3DModifier__Class* type_info_ref = nullptr;
        }
        inline app::VerletSkinning3DModifier__Class** type_info = &type_info_ref;
        inline app::VerletSkinning3DModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinning3DModifier__Class>(type_info, "", "VerletSkinning3DModifier");
        }
        inline app::VerletSkinning3DModifier* create() {
            return il2cpp::create_object<app::VerletSkinning3DModifier>(get_class());
        }
        inline app::VerletSkinning3DModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletSkinning3DModifier__Array>(get_class(), size);
        }
        inline app::VerletSkinning3DModifier__Array* create_array(const std::vector<app::VerletSkinning3DModifier*>& items) {
            return il2cpp::array_new<app::VerletSkinning3DModifier__Array>(get_class(), items);
        }
    } // namespace VerletSkinning3DModifier
} // namespace app::classes::types
