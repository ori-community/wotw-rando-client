#pragma once
#include <Modloader/app/structs/EActivateGameOverlayToWebPageMode__Enum.h>
#include <Modloader/app/structs/EActivateGameOverlayToWebPageMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EActivateGameOverlayToWebPageMode__Enum {
        inline app::EActivateGameOverlayToWebPageMode__Enum__Class** type_info() {
            static app::EActivateGameOverlayToWebPageMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EActivateGameOverlayToWebPageMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EActivateGameOverlayToWebPageMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EActivateGameOverlayToWebPageMode__Enum__Class>(type_info(), "Steamworks", "EActivateGameOverlayToWebPageMode");
        }
        inline app::EActivateGameOverlayToWebPageMode__Enum* create() {
            return il2cpp::create_object<app::EActivateGameOverlayToWebPageMode__Enum>(get_class());
        }
    } // namespace EActivateGameOverlayToWebPageMode__Enum
} // namespace app::classes::types
