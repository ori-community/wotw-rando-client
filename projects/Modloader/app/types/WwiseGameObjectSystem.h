#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseGameObjectSystem {
        inline app::WwiseGameObjectSystem__Class** type_info = (app::WwiseGameObjectSystem__Class**)(modloader::win::memory::resolve_rva(0x04796480));
        inline app::WwiseGameObjectSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseGameObjectSystem__Class>(type_info, "Moon.Wwise", "WwiseGameObjectSystem");
        }
        inline app::WwiseGameObjectSystem* create() {
            return il2cpp::create_object<app::WwiseGameObjectSystem>(get_class());
        }
    } // namespace WwiseGameObjectSystem
} // namespace app::classes::types
