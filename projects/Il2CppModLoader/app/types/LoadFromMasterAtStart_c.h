#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadFromMasterAtStart_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadFromMasterAtStart_c__Class** type_info;
        inline app::LoadFromMasterAtStart_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadFromMasterAtStart_c__Class>(type_info, "", "LoadFromMasterAtStart", "<>c");
        }
        inline app::LoadFromMasterAtStart_c* create() {
            return il2cpp::create_object<app::LoadFromMasterAtStart_c>(get_class());
        }
    } // namespace LoadFromMasterAtStart_c
} // namespace app::classes::types
