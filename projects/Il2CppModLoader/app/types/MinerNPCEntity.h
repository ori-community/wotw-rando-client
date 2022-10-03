#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerNPCEntity {
        namespace {
            app::MinerNPCEntity__Class* type_info_ref = nullptr;
        }
        app::MinerNPCEntity__Class** type_info = &type_info_ref;
        inline app::MinerNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerNPCEntity__Class>(type_info, "", "MinerNPCEntity");
        }
        inline app::MinerNPCEntity* create() {
            return il2cpp::create_object<app::MinerNPCEntity>(get_class());
        }
    } // namespace MinerNPCEntity
} // namespace app::classes::types
