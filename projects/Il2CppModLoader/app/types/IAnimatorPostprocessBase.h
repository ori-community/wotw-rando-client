#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAnimatorPostprocessBase {
        inline app::IAnimatorPostprocessBase__Class** type_info = (app::IAnimatorPostprocessBase__Class**)(modloader::win::memory::resolve_rva(0x0475CE00));
        inline app::IAnimatorPostprocessBase__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorPostprocessBase__Class>(type_info, "Moon", "IAnimatorPostprocessBase");
        }
    } // namespace IAnimatorPostprocessBase
} // namespace app::classes::types
