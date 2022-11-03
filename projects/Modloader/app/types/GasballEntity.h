#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasballEntity {
        inline app::GasballEntity__Class** type_info = (app::GasballEntity__Class**)(modloader::win::memory::resolve_rva(0x04721B20));
        inline app::GasballEntity__Class* get_class() {
            return il2cpp::get_class<app::GasballEntity__Class>(type_info, "", "GasballEntity");
        }
        inline app::GasballEntity* create() {
            return il2cpp::create_object<app::GasballEntity>(get_class());
        }
    } // namespace GasballEntity
} // namespace app::classes::types
