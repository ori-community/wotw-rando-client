#pragma once
#include <Modloader/app/structs/Optimization.h>
#include <Modloader/app/structs/Optimization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Optimization {
        inline app::Optimization__Class** type_info() {
            static app::Optimization__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Optimization__Class**)(modloader::win::memory::resolve_rva(0x0473BD20));
            }
            return cache;
        }
        inline app::Optimization__Class* get_class() {
            return il2cpp::get_class<app::Optimization__Class>(type_info(), "Game", "Optimization");
        }
        inline app::Optimization* create() {
            return il2cpp::create_object<app::Optimization>(get_class());
        }
    } // namespace Optimization
} // namespace app::classes::types
