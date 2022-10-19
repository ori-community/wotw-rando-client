#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IConstrainedEntity {
        inline app::IConstrainedEntity__Class** type_info = (app::IConstrainedEntity__Class**)(modloader::win::memory::resolve_rva(0x0478DD18));
        inline app::IConstrainedEntity__Class* get_class() {
            return il2cpp::get_class<app::IConstrainedEntity__Class>(type_info, "Moon.Timeline.Constraints", "IConstrainedEntity");
        }
    } // namespace IConstrainedEntity
} // namespace app::classes::types
