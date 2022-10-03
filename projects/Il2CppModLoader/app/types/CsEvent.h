#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CsEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CsEvent__Class** type_info;
        inline app::CsEvent__Class* get_class() {
            return il2cpp::get_class<app::CsEvent__Class>(type_info, "Microsoft.Applications.Events.DataModels", "CsEvent");
        }
        inline app::CsEvent* create() {
            return il2cpp::create_object<app::CsEvent>(get_class());
        }
    } // namespace CsEvent
} // namespace app::classes::types
