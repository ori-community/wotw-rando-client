#pragma once
#include <Modloader/app/structs/EnemyStopper.h>
#include <Modloader/app/structs/EnemyStopper__Array.h>
#include <Modloader/app/structs/EnemyStopper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyStopper {
        inline app::EnemyStopper__Class** type_info() {
            static app::EnemyStopper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyStopper__Class**)(modloader::win::memory::resolve_rva(0x04726A60));
            }
            return cache;
        }
        inline app::EnemyStopper__Class* get_class() {
            return il2cpp::get_class<app::EnemyStopper__Class>(type_info(), "", "EnemyStopper");
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
