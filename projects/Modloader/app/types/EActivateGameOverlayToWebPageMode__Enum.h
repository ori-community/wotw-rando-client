#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EActivateGameOverlayToWebPageMode__Enum__Class.h>
#include <Modloader/app/structs/EActivateGameOverlayToWebPageMode__Enum.h>

namespace app::classes::types {
    namespace EActivateGameOverlayToWebPageMode__Enum {
        namespace {
            inline app::EActivateGameOverlayToWebPageMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EActivateGameOverlayToWebPageMode__Enum__Class** type_info = &type_info_ref;
        inline app::EActivateGameOverlayToWebPageMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EActivateGameOverlayToWebPageMode__Enum__Class>(type_info, "Steamworks", "EActivateGameOverlayToWebPageMode");
        }
        inline app::EActivateGameOverlayToWebPageMode__Enum* create() {
            return il2cpp::create_object<app::EActivateGameOverlayToWebPageMode__Enum>(get_class());
        }
    } // namespace EActivateGameOverlayToWebPageMode__Enum
} // namespace app::classes::types
