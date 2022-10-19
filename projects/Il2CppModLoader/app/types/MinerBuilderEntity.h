#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerBuilderEntity {
        inline app::MinerBuilderEntity__Class** type_info = (app::MinerBuilderEntity__Class**)(modloader::win::memory::resolve_rva(0x0474ACB8));
        inline app::MinerBuilderEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderEntity__Class>(type_info, "", "MinerBuilderEntity");
        }
        inline app::MinerBuilderEntity* create() {
            return il2cpp::create_object<app::MinerBuilderEntity>(get_class());
        }
    } // namespace MinerBuilderEntity
} // namespace app::classes::types
