#pragma once
#include <Modloader/app/structs/GameScheduler.h>
#include <Modloader/app/structs/GameScheduler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameScheduler {
        inline app::GameScheduler__Class** type_info() {
            static app::GameScheduler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameScheduler__Class**)(modloader::win::memory::resolve_rva(0x04713EF0));
            }
            return cache;
        }
        inline app::GameScheduler__Class* get_class() {
            return il2cpp::get_class<app::GameScheduler__Class>(type_info(), "", "GameScheduler");
        }
        inline app::GameScheduler* create() {
            return il2cpp::create_object<app::GameScheduler>(get_class());
        }
    } // namespace GameScheduler
} // namespace app::classes::types
