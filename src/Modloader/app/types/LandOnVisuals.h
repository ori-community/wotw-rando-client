#pragma once
#include <Modloader/app/structs/LandOnVisuals.h>
#include <Modloader/app/structs/LandOnVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LandOnVisuals {
        inline app::LandOnVisuals__Class** type_info() {
            static app::LandOnVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LandOnVisuals__Class**)(modloader::win::memory::resolve_rva(0x04754E80));
            }
            return cache;
        }
        inline app::LandOnVisuals__Class* get_class() {
            return il2cpp::get_class<app::LandOnVisuals__Class>(type_info(), "", "LandOnVisuals");
        }
        inline app::LandOnVisuals* create() {
            return il2cpp::create_object<app::LandOnVisuals>(get_class());
        }
    } // namespace LandOnVisuals
} // namespace app::classes::types
