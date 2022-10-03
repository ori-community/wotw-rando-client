#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClearTrailOverCertainDistance {
        namespace {
            app::ClearTrailOverCertainDistance__Class* type_info_ref = nullptr;
        }
        app::ClearTrailOverCertainDistance__Class** type_info = &type_info_ref;
        inline app::ClearTrailOverCertainDistance__Class* get_class() {
            return il2cpp::get_class<app::ClearTrailOverCertainDistance__Class>(type_info, "", "ClearTrailOverCertainDistance");
        }
        inline app::ClearTrailOverCertainDistance* create() {
            return il2cpp::create_object<app::ClearTrailOverCertainDistance>(get_class());
        }
    } // namespace ClearTrailOverCertainDistance
} // namespace app::classes::types
