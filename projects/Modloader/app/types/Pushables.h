#pragma once
#include <Modloader/app/structs/Pushables.h>
#include <Modloader/app/structs/Pushables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Pushables {
        inline app::Pushables__Class** type_info() {
            static app::Pushables__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Pushables__Class**)(modloader::win::memory::resolve_rva(0x0472A510));
            }
            return cache;
        }
        inline app::Pushables__Class* get_class() {
            return il2cpp::get_class<app::Pushables__Class>(type_info(), "", "Pushables");
        }
        inline app::Pushables* create() {
            return il2cpp::create_object<app::Pushables>(get_class());
        }
    } // namespace Pushables
} // namespace app::classes::types
