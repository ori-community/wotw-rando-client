#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletSkinning2DModifier__Array {
        namespace {
            inline app::VerletSkinning2DModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletSkinning2DModifier__Array__Class** type_info = &type_info_ref;
        inline app::VerletSkinning2DModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinning2DModifier__Array__Class>(type_info, "", "VerletSkinning2DModifier[]");
        }
        inline app::VerletSkinning2DModifier__Array* create() {
            return il2cpp::create_object<app::VerletSkinning2DModifier__Array>(get_class());
        }
    } // namespace VerletSkinning2DModifier__Array
} // namespace app::classes::types
