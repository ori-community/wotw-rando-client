#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatClimbBehaviour {
        namespace {
            app::SpiderBatClimbBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBatClimbBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatClimbBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatClimbBehaviour__Class>(type_info, "", "SpiderBatClimbBehaviour");
        }
        inline app::SpiderBatClimbBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatClimbBehaviour>(get_class());
        }
    } // namespace SpiderBatClimbBehaviour
} // namespace app::classes::types
