#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Statics {
        inline app::Statics__Class** type_info = (app::Statics__Class**)(modloader::win::memory::resolve_rva(0x04758118));
        inline app::Statics__Class* get_class() {
            return il2cpp::get_class<app::Statics__Class>(type_info, "System.Diagnostics.Tracing", "Statics");
        }
        inline app::Statics* create() {
            return il2cpp::create_object<app::Statics>(get_class());
        }
    } // namespace Statics
} // namespace app::classes::types
