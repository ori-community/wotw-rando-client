#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteAction {
        inline app::RemoteAction__Class** type_info = (app::RemoteAction__Class**)(modloader::win::memory::resolve_rva(0x04736250));
        inline app::RemoteAction__Class* get_class() {
            return il2cpp::get_class<app::RemoteAction__Class>(type_info, "", "RemoteAction");
        }
        inline app::RemoteAction* create() {
            return il2cpp::create_object<app::RemoteAction>(get_class());
        }
    } // namespace RemoteAction
} // namespace app::classes::types
