#pragma once
#include <Modloader/app/structs/MechSpider.h>
#include <Modloader/app/structs/MechSpider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MechSpider {
        inline app::MechSpider__Class** type_info() {
            static app::MechSpider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MechSpider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MechSpider__Class* get_class() {
            return il2cpp::get_class<app::MechSpider__Class>(type_info(), "RootMotion.Demos", "MechSpider");
        }
        inline app::MechSpider* create() {
            return il2cpp::create_object<app::MechSpider>(get_class());
        }
    } // namespace MechSpider
} // namespace app::classes::types
