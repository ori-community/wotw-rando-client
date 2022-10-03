#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderEntity_c__Class** type_info;
        inline app::BuilderEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderEntity_c__Class>(type_info, "", "BuilderEntity", "<>c");
        }
        inline app::BuilderEntity_c* create() {
            return il2cpp::create_object<app::BuilderEntity_c>(get_class());
        }
    } // namespace BuilderEntity_c
} // namespace app::classes::types
