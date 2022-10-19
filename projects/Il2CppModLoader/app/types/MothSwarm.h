#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothSwarm {
        inline app::MothSwarm__Class** type_info = (app::MothSwarm__Class**)(modloader::win::memory::resolve_rva(0x04742428));
        inline app::MothSwarm__Class* get_class() {
            return il2cpp::get_class<app::MothSwarm__Class>(type_info, "", "MothSwarm");
        }
        inline app::MothSwarm* create() {
            return il2cpp::create_object<app::MothSwarm>(get_class());
        }
    } // namespace MothSwarm
} // namespace app::classes::types
