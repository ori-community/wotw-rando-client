#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConstrainedEntityWithChildren {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConstrainedEntityWithChildren__Class** type_info;
        inline app::IConstrainedEntityWithChildren__Class* get_class() {
            return il2cpp::get_class<app::IConstrainedEntityWithChildren__Class>(type_info, "Moon.Timeline.Constraints", "IConstrainedEntityWithChildren");
        }
    } // namespace IConstrainedEntityWithChildren
} // namespace app::classes::types
