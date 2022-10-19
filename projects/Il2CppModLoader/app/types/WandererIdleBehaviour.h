#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererIdleBehaviour {
        inline app::WandererIdleBehaviour__Class** type_info = (app::WandererIdleBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04780178));
        inline app::WandererIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererIdleBehaviour__Class>(type_info, "", "WandererIdleBehaviour");
        }
        inline app::WandererIdleBehaviour* create() {
            return il2cpp::create_object<app::WandererIdleBehaviour>(get_class());
        }
    } // namespace WandererIdleBehaviour
} // namespace app::classes::types
