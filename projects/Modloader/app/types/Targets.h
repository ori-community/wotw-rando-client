#pragma once
#include <Modloader/app/structs/Targets.h>
#include <Modloader/app/structs/Targets__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Targets {
        inline app::Targets__Class** type_info() {
            static app::Targets__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Targets__Class**)(modloader::win::memory::resolve_rva(0x047219C0));
            }
            return cache;
        }
        inline app::Targets__Class* get_class() {
            return il2cpp::get_class<app::Targets__Class>(type_info(), "Game", "Targets");
        }
        inline app::Targets* create() {
            return il2cpp::create_object<app::Targets>(get_class());
        }
    } // namespace Targets
} // namespace app::classes::types
