#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver__Class.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver__Array.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver {
        inline app::LaserShieldDamageReceiver__Class** type_info = (app::LaserShieldDamageReceiver__Class**)(modloader::win::memory::resolve_rva(0x0473DC68));
        inline app::LaserShieldDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldDamageReceiver__Class>(type_info, "", "LaserShieldDamageReceiver");
        }
        inline app::LaserShieldDamageReceiver* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver>(get_class());
        }
        inline app::LaserShieldDamageReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver__Array>(get_class(), size);
        }
        inline app::LaserShieldDamageReceiver__Array* create_array(const std::vector<app::LaserShieldDamageReceiver*>& items) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver__Array>(get_class(), items);
        }
    } // namespace LaserShieldDamageReceiver
} // namespace app::classes::types
