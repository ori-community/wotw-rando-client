#pragma once
#include <Modloader/app/structs/Random.h>
#include <Modloader/app/structs/Random__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Random {
        inline app::Random__Class** type_info() {
            static app::Random__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Random__Class**)(modloader::win::memory::resolve_rva(0x0476B6C0));
            }
            return cache;
        }
        inline app::Random__Class* get_class() {
            return il2cpp::get_class<app::Random__Class>(type_info(), "System", "Random");
        }
        inline app::Random* create() {
            return il2cpp::create_object<app::Random>(get_class());
        }
    } // namespace Random
} // namespace app::classes::types
