#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatAcidSprayBehaviour {
        namespace {
            app::SpiderBatAcidSprayBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBatAcidSprayBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatAcidSprayBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatAcidSprayBehaviour__Class>(type_info, "", "SpiderBatAcidSprayBehaviour");
        }
        inline app::SpiderBatAcidSprayBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatAcidSprayBehaviour>(get_class());
        }
    } // namespace SpiderBatAcidSprayBehaviour
} // namespace app::classes::types
