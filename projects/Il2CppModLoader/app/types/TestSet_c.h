#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestSet_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestSet_c__Class** type_info;
        inline app::TestSet_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TestSet_c__Class>(type_info, "", "TestSet", "<>c");
        }
        inline app::TestSet_c* create() {
            return il2cpp::create_object<app::TestSet_c>(get_class());
        }
    } // namespace TestSet_c
} // namespace app::classes::types
