#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolutionOptions_c__Class** type_info;
        inline app::ResolutionOptions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_c__Class>(type_info, "", "ResolutionOptions", "<>c");
        }
        inline app::ResolutionOptions_c* create() {
            return il2cpp::create_object<app::ResolutionOptions_c>(get_class());
        }
    } // namespace ResolutionOptions_c
} // namespace app::classes::types
