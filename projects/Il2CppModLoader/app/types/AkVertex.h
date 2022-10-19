#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkVertex {
        inline app::AkVertex__Class** type_info = (app::AkVertex__Class**)(modloader::win::memory::resolve_rva(0x0479A2F0));
        inline app::AkVertex__Class* get_class() {
            return il2cpp::get_class<app::AkVertex__Class>(type_info, "", "AkVertex");
        }
        inline app::AkVertex* create() {
            return il2cpp::create_object<app::AkVertex>(get_class());
        }
    } // namespace AkVertex
} // namespace app::classes::types
