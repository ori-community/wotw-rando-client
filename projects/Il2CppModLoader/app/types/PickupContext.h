#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PickupContext {
        inline app::PickupContext__Class** type_info = (app::PickupContext__Class**)(modloader::win::memory::resolve_rva(0x0471C6B8));
        inline app::PickupContext__Class* get_class() {
            return il2cpp::get_class<app::PickupContext__Class>(type_info, "", "PickupContext");
        }
        inline app::PickupContext* create() {
            return il2cpp::create_object<app::PickupContext>(get_class());
        }
    } // namespace PickupContext
} // namespace app::classes::types
