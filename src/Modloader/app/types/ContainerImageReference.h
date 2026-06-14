#pragma once
#include <Modloader/app/structs/ContainerImageReference.h>
#include <Modloader/app/structs/ContainerImageReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContainerImageReference {
        inline app::ContainerImageReference__Class** type_info() {
            static app::ContainerImageReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContainerImageReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContainerImageReference__Class* get_class() {
            return il2cpp::get_class<app::ContainerImageReference__Class>(type_info(), "PlayFab.MultiplayerModels", "ContainerImageReference");
        }
        inline app::ContainerImageReference* create() {
            return il2cpp::create_object<app::ContainerImageReference>(get_class());
        }
    } // namespace ContainerImageReference
} // namespace app::classes::types
