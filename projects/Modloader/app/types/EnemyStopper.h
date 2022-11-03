#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyStopper {
        inline app::EnemyStopper__Class** type_info = (app::EnemyStopper__Class**)(modloader::win::memory::resolve_rva(0x04726A60));
        inline app::EnemyStopper__Class* get_class() {
            return il2cpp::get_class<app::EnemyStopper__Class>(type_info, "", "EnemyStopper");
        }
        inline app::EnemyStopper* create() {
            return il2cpp::create_object<app::EnemyStopper>(get_class());
        }
        inline app::EnemyStopper__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyStopper__Array>(get_class(), size);
        }
        inline app::EnemyStopper__Array* create_array(const std::vector<app::EnemyStopper*>& items) {
            return il2cpp::array_new<app::EnemyStopper__Array>(get_class(), items);
        }
    } // namespace EnemyStopper
} // namespace app::classes::types
