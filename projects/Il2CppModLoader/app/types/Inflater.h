#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Inflater {
        inline app::Inflater__Class** type_info = (app::Inflater__Class**)(modloader::win::memory::resolve_rva(0x04776CA8));
        inline app::Inflater__Class* get_class() {
            return il2cpp::get_class<app::Inflater__Class>(type_info, "Unity.IO.Compression", "Inflater");
        }
        inline app::Inflater* create() {
            return il2cpp::create_object<app::Inflater>(get_class());
        }
    } // namespace Inflater
} // namespace app::classes::types
