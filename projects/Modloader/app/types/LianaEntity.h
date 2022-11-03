#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LianaEntity {
        inline app::LianaEntity__Class** type_info = (app::LianaEntity__Class**)(modloader::win::memory::resolve_rva(0x04739F88));
        inline app::LianaEntity__Class* get_class() {
            return il2cpp::get_class<app::LianaEntity__Class>(type_info, "", "LianaEntity");
        }
        inline app::LianaEntity* create() {
            return il2cpp::create_object<app::LianaEntity>(get_class());
        }
    } // namespace LianaEntity
} // namespace app::classes::types
