#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MechSpider {
        namespace {
            app::MechSpider__Class* type_info_ref = nullptr;
        }
        app::MechSpider__Class** type_info = &type_info_ref;
        inline app::MechSpider__Class* get_class() {
            return il2cpp::get_class<app::MechSpider__Class>(type_info, "RootMotion.Demos", "MechSpider");
        }
        inline app::MechSpider* create() {
            return il2cpp::create_object<app::MechSpider>(get_class());
        }
    } // namespace MechSpider
} // namespace app::classes::types
