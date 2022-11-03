#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockDamageInterruptionHandler {
        inline app::BlockDamageInterruptionHandler__Class** type_info = (app::BlockDamageInterruptionHandler__Class**)(modloader::win::memory::resolve_rva(0x0471EC30));
        inline app::BlockDamageInterruptionHandler__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruptionHandler__Class>(type_info, "Moon", "BlockDamageInterruptionHandler");
        }
        inline app::BlockDamageInterruptionHandler* create() {
            return il2cpp::create_object<app::BlockDamageInterruptionHandler>(get_class());
        }
        inline app::BlockDamageInterruptionHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::BlockDamageInterruptionHandler__Array>(get_class(), size);
        }
        inline app::BlockDamageInterruptionHandler__Array* create_array(const std::vector<app::BlockDamageInterruptionHandler*>& items) {
            return il2cpp::array_new<app::BlockDamageInterruptionHandler__Array>(get_class(), items);
        }
    } // namespace BlockDamageInterruptionHandler
} // namespace app::classes::types
