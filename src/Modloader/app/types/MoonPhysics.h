#pragma once
#include <Modloader/app/structs/MoonPhysics.h>
#include <Modloader/app/structs/MoonPhysics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonPhysics {
        inline app::MoonPhysics__Class** type_info() {
            static app::MoonPhysics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonPhysics__Class**)(modloader::win::memory::resolve_rva(0x04749638));
            }
            return cache;
        }
        inline app::MoonPhysics__Class* get_class() {
            return il2cpp::get_class<app::MoonPhysics__Class>(type_info(), "", "MoonPhysics");
        }
        inline app::MoonPhysics* create() {
            return il2cpp::create_object<app::MoonPhysics>(get_class());
        }
    } // namespace MoonPhysics
} // namespace app::classes::types
