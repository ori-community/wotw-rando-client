#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConstrainedEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConstrainedEntity__Class** type_info;
        inline app::IConstrainedEntity__Class* get_class() {
            return il2cpp::get_class<app::IConstrainedEntity__Class>(type_info, "Moon.Timeline.Constraints", "IConstrainedEntity");
        }
        inline app::IConstrainedEntity* create() {
            return il2cpp::create_object<app::IConstrainedEntity>(get_class());
        }
    } // namespace IConstrainedEntity
} // namespace app::classes::types
