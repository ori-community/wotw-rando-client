#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
