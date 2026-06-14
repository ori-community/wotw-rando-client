#pragma once
#include <Modloader/app/structs/StomperVisuals.h>
#include <Modloader/app/structs/StomperVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StomperVisuals {
        inline app::StomperVisuals__Class** type_info() {
            static app::StomperVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StomperVisuals__Class**)(modloader::win::memory::resolve_rva(0x04719588));
            }
            return cache;
        }
        inline app::StomperVisuals__Class* get_class() {
            return il2cpp::get_class<app::StomperVisuals__Class>(type_info(), "", "StomperVisuals");
        }
        inline app::StomperVisuals* create() {
            return il2cpp::create_object<app::StomperVisuals>(get_class());
        }
    } // namespace StomperVisuals
} // namespace app::classes::types
