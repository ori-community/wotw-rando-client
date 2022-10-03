#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MokiNPCEntity {
        namespace {
            app::MokiNPCEntity__Class* type_info_ref = nullptr;
        }
        app::MokiNPCEntity__Class** type_info = &type_info_ref;
        inline app::MokiNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::MokiNPCEntity__Class>(type_info, "", "MokiNPCEntity");
        }
        inline app::MokiNPCEntity* create() {
            return il2cpp::create_object<app::MokiNPCEntity>(get_class());
        }
    } // namespace MokiNPCEntity
} // namespace app::classes::types
