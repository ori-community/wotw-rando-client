#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericStack {
        inline app::GenericStack__Class** type_info = (app::GenericStack__Class**)(modloader::win::memory::resolve_rva(0x04765120));
        inline app::GenericStack__Class* get_class() {
            return il2cpp::get_class<app::GenericStack__Class>(type_info, "UnityEngineInternal", "GenericStack");
        }
        inline app::GenericStack* create() {
            return il2cpp::create_object<app::GenericStack>(get_class());
        }
    } // namespace GenericStack
} // namespace app::classes::types
