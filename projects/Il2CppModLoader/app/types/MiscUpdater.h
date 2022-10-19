#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MiscUpdater {
        inline app::MiscUpdater__Class** type_info = (app::MiscUpdater__Class**)(modloader::win::memory::resolve_rva(0x047136F8));
        inline app::MiscUpdater__Class* get_class() {
            return il2cpp::get_class<app::MiscUpdater__Class>(type_info, "", "MiscUpdater");
        }
        inline app::MiscUpdater* create() {
            return il2cpp::create_object<app::MiscUpdater>(get_class());
        }
    } // namespace MiscUpdater
} // namespace app::classes::types
