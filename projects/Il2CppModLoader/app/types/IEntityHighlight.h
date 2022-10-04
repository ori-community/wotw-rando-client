#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntityHighlight {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEntityHighlight__Class** type_info;
        inline app::IEntityHighlight__Class* get_class() {
            return il2cpp::get_class<app::IEntityHighlight__Class>(type_info, "", "IEntityHighlight");
        }
        inline app::IEntityHighlight* create() {
            return il2cpp::create_object<app::IEntityHighlight>(get_class());
        }
    } // namespace IEntityHighlight
} // namespace app::classes::types
