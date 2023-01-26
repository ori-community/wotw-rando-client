#pragma once
#include <Modloader/app/structs/LightColliderGroup.h>
#include <Modloader/app/structs/LightColliderGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightColliderGroup {
        inline app::LightColliderGroup__Class** type_info() {
            static app::LightColliderGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightColliderGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightColliderGroup__Class* get_class() {
            return il2cpp::get_class<app::LightColliderGroup__Class>(type_info(), "", "LightColliderGroup");
        }
        inline app::LightColliderGroup* create() {
            return il2cpp::create_object<app::LightColliderGroup>(get_class());
        }
    } // namespace LightColliderGroup
} // namespace app::classes::types
