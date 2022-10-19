#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KnownHttpVerb {
        inline app::KnownHttpVerb__Class** type_info = (app::KnownHttpVerb__Class**)(modloader::win::memory::resolve_rva(0x04781AC8));
        inline app::KnownHttpVerb__Class* get_class() {
            return il2cpp::get_class<app::KnownHttpVerb__Class>(type_info, "System.Net", "KnownHttpVerb");
        }
        inline app::KnownHttpVerb* create() {
            return il2cpp::create_object<app::KnownHttpVerb>(get_class());
        }
    } // namespace KnownHttpVerb
} // namespace app::classes::types
