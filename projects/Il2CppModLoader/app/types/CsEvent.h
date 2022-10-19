#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CsEvent {
        inline app::CsEvent__Class** type_info = (app::CsEvent__Class**)(modloader::win::memory::resolve_rva(0x04781B60));
        inline app::CsEvent__Class* get_class() {
            return il2cpp::get_class<app::CsEvent__Class>(type_info, "Microsoft.Applications.Events.DataModels", "CsEvent");
        }
        inline app::CsEvent* create() {
            return il2cpp::create_object<app::CsEvent>(get_class());
        }
    } // namespace CsEvent
} // namespace app::classes::types
