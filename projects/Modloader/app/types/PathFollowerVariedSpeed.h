#pragma once
#include <Modloader/app/structs/PathFollowerVariedSpeed.h>
#include <Modloader/app/structs/PathFollowerVariedSpeed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathFollowerVariedSpeed {
        inline app::PathFollowerVariedSpeed__Class** type_info() {
            static app::PathFollowerVariedSpeed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PathFollowerVariedSpeed__Class**)(modloader::win::memory::resolve_rva(0x0474A8E0));
            }
            return cache;
        }
        inline app::PathFollowerVariedSpeed__Class* get_class() {
            return il2cpp::get_class<app::PathFollowerVariedSpeed__Class>(type_info(), "", "PathFollowerVariedSpeed");
        }
        inline app::PathFollowerVariedSpeed* create() {
            return il2cpp::create_object<app::PathFollowerVariedSpeed>(get_class());
        }
    } // namespace PathFollowerVariedSpeed
} // namespace app::classes::types
