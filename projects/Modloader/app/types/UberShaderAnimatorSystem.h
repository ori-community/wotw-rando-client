#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorSystem {
        inline app::UberShaderAnimatorSystem__Class** type_info = (app::UberShaderAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x047212D8));
        inline app::UberShaderAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorSystem__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorSystem");
        }
        inline app::UberShaderAnimatorSystem* create() {
            return il2cpp::create_object<app::UberShaderAnimatorSystem>(get_class());
        }
    } // namespace UberShaderAnimatorSystem
} // namespace app::classes::types
