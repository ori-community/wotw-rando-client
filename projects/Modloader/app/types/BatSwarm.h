#pragma once
#include <Modloader/app/structs/BatSwarm.h>
#include <Modloader/app/structs/BatSwarm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatSwarm {
        inline app::BatSwarm__Class** type_info() {
            static app::BatSwarm__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BatSwarm__Class**)(modloader::win::memory::resolve_rva(0x04775A88));
            }
            return cache;
        }
        inline app::BatSwarm__Class* get_class() {
            return il2cpp::get_class<app::BatSwarm__Class>(type_info(), "", "BatSwarm");
        }
        inline app::BatSwarm* create() {
            return il2cpp::create_object<app::BatSwarm>(get_class());
        }
    } // namespace BatSwarm
} // namespace app::classes::types
