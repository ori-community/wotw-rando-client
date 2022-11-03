#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem {
        inline app::ColorAnimatorSystem__Class** type_info = (app::ColorAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04702BA8));
        inline app::ColorAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimatorSystem__Class>(type_info, "Moon.Timeline", "ColorAnimatorSystem");
        }
        inline app::ColorAnimatorSystem* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem>(get_class());
        }
    } // namespace ColorAnimatorSystem
} // namespace app::classes::types
