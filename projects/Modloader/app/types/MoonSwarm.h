#pragma once
#include <Modloader/app/structs/MoonSwarm.h>
#include <Modloader/app/structs/MoonSwarm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonSwarm {
        inline app::MoonSwarm__Class** type_info() {
            static app::MoonSwarm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonSwarm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonSwarm__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarm__Class>(type_info(), "", "MoonSwarm");
        }
        inline app::MoonSwarm* create() {
            return il2cpp::create_object<app::MoonSwarm>(get_class());
        }
    } // namespace MoonSwarm
} // namespace app::classes::types
