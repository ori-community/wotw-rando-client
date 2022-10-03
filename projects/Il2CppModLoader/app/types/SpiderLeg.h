#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderLeg {
        namespace {
            app::SpiderLeg__Class* type_info_ref = nullptr;
        }
        app::SpiderLeg__Class** type_info = &type_info_ref;
        inline app::SpiderLeg__Class* get_class() {
            return il2cpp::get_class<app::SpiderLeg__Class>(type_info, "", "SpiderLeg");
        }
        inline app::SpiderLeg* create() {
            return il2cpp::create_object<app::SpiderLeg>(get_class());
        }
    } // namespace SpiderLeg
} // namespace app::classes::types
