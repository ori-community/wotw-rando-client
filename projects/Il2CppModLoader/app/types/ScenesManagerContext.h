#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerContext {
        inline app::ScenesManagerContext__Class** type_info = (app::ScenesManagerContext__Class**)(modloader::win::memory::resolve_rva(0x0473CCF0));
        inline app::ScenesManagerContext__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerContext__Class>(type_info, "", "ScenesManagerContext");
        }
        inline app::ScenesManagerContext* create() {
            return il2cpp::create_object<app::ScenesManagerContext>(get_class());
        }
    } // namespace ScenesManagerContext
} // namespace app::classes::types
