#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoEntity {
        inline app::SkeetoEntity__Class** type_info = (app::SkeetoEntity__Class**)(modloader::win::memory::resolve_rva(0x0476E3F8));
        inline app::SkeetoEntity__Class* get_class() {
            return il2cpp::get_class<app::SkeetoEntity__Class>(type_info, "", "SkeetoEntity");
        }
        inline app::SkeetoEntity* create() {
            return il2cpp::create_object<app::SkeetoEntity>(get_class());
        }
    } // namespace SkeetoEntity
} // namespace app::classes::types
