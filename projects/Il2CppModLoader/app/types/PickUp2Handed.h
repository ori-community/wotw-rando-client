#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickUp2Handed {
        namespace {
            app::PickUp2Handed__Class* type_info_ref = nullptr;
        }
        app::PickUp2Handed__Class** type_info = &type_info_ref;
        inline app::PickUp2Handed__Class* get_class() {
            return il2cpp::get_class<app::PickUp2Handed__Class>(type_info, "RootMotion.Demos", "PickUp2Handed");
        }
        inline app::PickUp2Handed* create() {
            return il2cpp::create_object<app::PickUp2Handed>(get_class());
        }
    } // namespace PickUp2Handed
} // namespace app::classes::types
