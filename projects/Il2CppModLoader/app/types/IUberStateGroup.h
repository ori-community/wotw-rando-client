#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateGroup__Class** type_info;
        inline app::IUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::IUberStateGroup__Class>(type_info, "Moon", "IUberStateGroup");
        }
        inline app::IUberStateGroup* create() {
            return il2cpp::create_object<app::IUberStateGroup>(get_class());
        }
    } // namespace IUberStateGroup
} // namespace app::classes::types
