#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITransitionOwner {
        inline app::ITransitionOwner__Class** type_info = (app::ITransitionOwner__Class**)(modloader::win::memory::resolve_rva(0x04759680));
        inline app::ITransitionOwner__Class* get_class() {
            return il2cpp::get_class<app::ITransitionOwner__Class>(type_info, "Moon", "ITransitionOwner");
        }
    } // namespace ITransitionOwner
} // namespace app::classes::types
