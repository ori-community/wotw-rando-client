#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerEntity {
        inline app::MinerEntity__Class** type_info = (app::MinerEntity__Class**)(modloader::win::memory::resolve_rva(0x04751BC8));
        inline app::MinerEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerEntity__Class>(type_info, "", "MinerEntity");
        }
        inline app::MinerEntity* create() {
            return il2cpp::create_object<app::MinerEntity>(get_class());
        }
    } // namespace MinerEntity
} // namespace app::classes::types
