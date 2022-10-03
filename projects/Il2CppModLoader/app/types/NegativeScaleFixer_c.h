#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegativeScaleFixer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegativeScaleFixer_c__Class** type_info;
        inline app::NegativeScaleFixer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NegativeScaleFixer_c__Class>(type_info, "", "NegativeScaleFixer", "<>c");
        }
        inline app::NegativeScaleFixer_c* create() {
            return il2cpp::create_object<app::NegativeScaleFixer_c>(get_class());
        }
    } // namespace NegativeScaleFixer_c
} // namespace app::classes::types
