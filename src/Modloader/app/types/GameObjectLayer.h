#pragma once
#include <Modloader/app/structs/GameObjectLayer.h>
#include <Modloader/app/structs/GameObjectLayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectLayer {
        inline app::GameObjectLayer__Class** type_info() {
            static app::GameObjectLayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameObjectLayer__Class**)(modloader::win::memory::resolve_rva(0x04776338));
            }
            return cache;
        }
        inline app::GameObjectLayer__Class* get_class() {
            return il2cpp::get_class<app::GameObjectLayer__Class>(type_info(), "", "GameObjectLayer");
        }
        inline app::GameObjectLayer* create() {
            return il2cpp::create_object<app::GameObjectLayer>(get_class());
        }
    } // namespace GameObjectLayer
} // namespace app::classes::types
