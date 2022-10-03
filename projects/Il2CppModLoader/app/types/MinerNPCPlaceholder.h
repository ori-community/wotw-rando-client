#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerNPCPlaceholder {
        namespace {
            app::MinerNPCPlaceholder__Class* type_info_ref = nullptr;
        }
        app::MinerNPCPlaceholder__Class** type_info = &type_info_ref;
        inline app::MinerNPCPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MinerNPCPlaceholder__Class>(type_info, "", "MinerNPCPlaceholder");
        }
        inline app::MinerNPCPlaceholder* create() {
            return il2cpp::create_object<app::MinerNPCPlaceholder>(get_class());
        }
    } // namespace MinerNPCPlaceholder
} // namespace app::classes::types
