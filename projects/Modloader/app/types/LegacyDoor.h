#pragma once
#include <Modloader/app/structs/LegacyDoor.h>
#include <Modloader/app/structs/LegacyDoor__Array.h>
#include <Modloader/app/structs/LegacyDoor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDoor {
        inline app::LegacyDoor__Class** type_info() {
            static app::LegacyDoor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyDoor__Class**)(modloader::win::memory::resolve_rva(0x04799AF0));
            }
            return cache;
        }
        inline app::LegacyDoor__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoor__Class>(type_info(), "", "LegacyDoor");
        }
        inline app::LegacyDoor* create() {
            return il2cpp::create_object<app::LegacyDoor>(get_class());
        }
        inline app::LegacyDoor__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyDoor__Array>(get_class(), size);
        }
        inline app::LegacyDoor__Array* create_array(const std::vector<app::LegacyDoor*>& items) {
            return il2cpp::array_new<app::LegacyDoor__Array>(get_class(), items);
        }
    } // namespace LegacyDoor
} // namespace app::classes::types
