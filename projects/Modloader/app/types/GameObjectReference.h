#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameObjectReference {
        inline app::GameObjectReference__Class** type_info = (app::GameObjectReference__Class**)(modloader::win::memory::resolve_rva(0x047526C8));
        inline app::GameObjectReference__Class* get_class() {
            return il2cpp::get_class<app::GameObjectReference__Class>(type_info, "", "GameObjectReference");
        }
        inline app::GameObjectReference* create() {
            return il2cpp::create_object<app::GameObjectReference>(get_class());
        }
    } // namespace GameObjectReference
} // namespace app::classes::types
