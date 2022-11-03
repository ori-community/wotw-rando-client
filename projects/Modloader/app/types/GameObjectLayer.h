#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameObjectLayer {
        inline app::GameObjectLayer__Class** type_info = (app::GameObjectLayer__Class**)(modloader::win::memory::resolve_rva(0x04776338));
        inline app::GameObjectLayer__Class* get_class() {
            return il2cpp::get_class<app::GameObjectLayer__Class>(type_info, "", "GameObjectLayer");
        }
        inline app::GameObjectLayer* create() {
            return il2cpp::create_object<app::GameObjectLayer>(get_class());
        }
    } // namespace GameObjectLayer
} // namespace app::classes::types
