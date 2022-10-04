#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAnimatorPostprocessBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAnimatorPostprocessBase__Class** type_info;
        inline app::IAnimatorPostprocessBase__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorPostprocessBase__Class>(type_info, "Moon", "IAnimatorPostprocessBase");
        }
    } // namespace IAnimatorPostprocessBase
} // namespace app::classes::types
