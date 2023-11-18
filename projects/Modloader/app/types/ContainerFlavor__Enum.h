#pragma once
#include <Modloader/app/structs/ContainerFlavor__Enum.h>
#include <Modloader/app/structs/ContainerFlavor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContainerFlavor__Enum {
        inline app::ContainerFlavor__Enum__Class** type_info() {
            static app::ContainerFlavor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContainerFlavor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContainerFlavor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContainerFlavor__Enum__Class>(type_info(), "PlayFab.MultiplayerModels", "ContainerFlavor");
        }
        inline app::ContainerFlavor__Enum* create() {
            return il2cpp::create_object<app::ContainerFlavor__Enum>(get_class());
        }
    } // namespace ContainerFlavor__Enum
} // namespace app::classes::types
