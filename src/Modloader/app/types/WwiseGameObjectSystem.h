#pragma once
#include <Modloader/app/structs/WwiseGameObjectSystem.h>
#include <Modloader/app/structs/WwiseGameObjectSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseGameObjectSystem {
        inline app::WwiseGameObjectSystem__Class** type_info() {
            static app::WwiseGameObjectSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseGameObjectSystem__Class**)(modloader::win::memory::resolve_rva(0x04796480));
            }
            return cache;
        }
        inline app::WwiseGameObjectSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseGameObjectSystem__Class>(type_info(), "Moon.Wwise", "WwiseGameObjectSystem");
        }
        inline app::WwiseGameObjectSystem* create() {
            return il2cpp::create_object<app::WwiseGameObjectSystem>(get_class());
        }
    } // namespace WwiseGameObjectSystem
} // namespace app::classes::types
