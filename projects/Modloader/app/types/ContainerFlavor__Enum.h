#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContainerFlavor__Enum {
        namespace {
            inline app::ContainerFlavor__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ContainerFlavor__Enum__Class** type_info = &type_info_ref;
        inline app::ContainerFlavor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContainerFlavor__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "ContainerFlavor");
        }
        inline app::ContainerFlavor__Enum* create() {
            return il2cpp::create_object<app::ContainerFlavor__Enum>(get_class());
        }
    } // namespace ContainerFlavor__Enum
} // namespace app::classes::types
