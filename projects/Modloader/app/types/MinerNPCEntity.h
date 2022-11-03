#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerNPCEntity {
        namespace {
            inline app::MinerNPCEntity__Class* type_info_ref = nullptr;
        }
        inline app::MinerNPCEntity__Class** type_info = &type_info_ref;
        inline app::MinerNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerNPCEntity__Class>(type_info, "", "MinerNPCEntity");
        }
        inline app::MinerNPCEntity* create() {
            return il2cpp::create_object<app::MinerNPCEntity>(get_class());
        }
    } // namespace MinerNPCEntity
} // namespace app::classes::types
