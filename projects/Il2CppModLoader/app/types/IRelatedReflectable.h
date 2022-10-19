#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRelatedReflectable {
        inline app::IRelatedReflectable__Class** type_info = (app::IRelatedReflectable__Class**)(modloader::win::memory::resolve_rva(0x047897A0));
        inline app::IRelatedReflectable__Class* get_class() {
            return il2cpp::get_class<app::IRelatedReflectable__Class>(type_info, "", "IRelatedReflectable");
        }
    } // namespace IRelatedReflectable
} // namespace app::classes::types
