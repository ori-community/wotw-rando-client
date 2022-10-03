#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProximityMine {
        namespace {
            app::ProximityMine__Class* type_info_ref = nullptr;
        }
        app::ProximityMine__Class** type_info = &type_info_ref;
        inline app::ProximityMine__Class* get_class() {
            return il2cpp::get_class<app::ProximityMine__Class>(type_info, "", "ProximityMine");
        }
        inline app::ProximityMine* create() {
            return il2cpp::create_object<app::ProximityMine>(get_class());
        }
    } // namespace ProximityMine
} // namespace app::classes::types
