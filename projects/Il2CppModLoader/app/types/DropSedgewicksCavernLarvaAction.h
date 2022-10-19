#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSedgewicksCavernLarvaAction {
        namespace {
            inline app::DropSedgewicksCavernLarvaAction__Class* type_info_ref = nullptr;
        }
        inline app::DropSedgewicksCavernLarvaAction__Class** type_info = &type_info_ref;
        inline app::DropSedgewicksCavernLarvaAction__Class* get_class() {
            return il2cpp::get_class<app::DropSedgewicksCavernLarvaAction__Class>(type_info, "", "DropSedgewicksCavernLarvaAction");
        }
        inline app::DropSedgewicksCavernLarvaAction* create() {
            return il2cpp::create_object<app::DropSedgewicksCavernLarvaAction>(get_class());
        }
    } // namespace DropSedgewicksCavernLarvaAction
} // namespace app::classes::types
