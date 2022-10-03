#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrazyMinerEntity {
        namespace {
            app::CrazyMinerEntity__Class* type_info_ref = nullptr;
        }
        app::CrazyMinerEntity__Class** type_info = &type_info_ref;
        inline app::CrazyMinerEntity__Class* get_class() {
            return il2cpp::get_class<app::CrazyMinerEntity__Class>(type_info, "", "CrazyMinerEntity");
        }
        inline app::CrazyMinerEntity* create() {
            return il2cpp::create_object<app::CrazyMinerEntity>(get_class());
        }
    } // namespace CrazyMinerEntity
} // namespace app::classes::types
