#pragma once
#include <Modloader/app/structs/WwiseEventSystem.h>
#include <Modloader/app/structs/WwiseEventSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem {
        inline app::WwiseEventSystem__Class** type_info() {
            static app::WwiseEventSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseEventSystem__Class**)(modloader::win::memory::resolve_rva(0x04711EB8));
            }
            return cache;
        }
        inline app::WwiseEventSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem");
        }
        inline app::WwiseEventSystem* create() {
            return il2cpp::create_object<app::WwiseEventSystem>(get_class());
        }
    } // namespace WwiseEventSystem
} // namespace app::classes::types
