#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritTurret__Class.h>
#include <Modloader/app/structs/SpiritTurret.h>
#include <Modloader/app/structs/SpiritTurret__Array.h>

namespace app::classes::types {
    namespace SpiritTurret {
        inline app::SpiritTurret__Class** type_info = (app::SpiritTurret__Class**)(modloader::win::memory::resolve_rva(0x04730F10));
        inline app::SpiritTurret__Class* get_class() {
            return il2cpp::get_class<app::SpiritTurret__Class>(type_info, "", "SpiritTurret");
        }
        inline app::SpiritTurret* create() {
            return il2cpp::create_object<app::SpiritTurret>(get_class());
        }
        inline app::SpiritTurret__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritTurret__Array>(get_class(), size);
        }
        inline app::SpiritTurret__Array* create_array(const std::vector<app::SpiritTurret*>& items) {
            return il2cpp::array_new<app::SpiritTurret__Array>(get_class(), items);
        }
    } // namespace SpiritTurret
} // namespace app::classes::types
