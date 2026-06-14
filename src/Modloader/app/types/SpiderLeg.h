#pragma once
#include <Modloader/app/structs/SpiderLeg.h>
#include <Modloader/app/structs/SpiderLeg__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderLeg {
        inline app::SpiderLeg__Class** type_info() {
            static app::SpiderLeg__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderLeg__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderLeg__Class* get_class() {
            return il2cpp::get_class<app::SpiderLeg__Class>(type_info(), "", "SpiderLeg");
        }
        inline app::SpiderLeg* create() {
            return il2cpp::create_object<app::SpiderLeg>(get_class());
        }
    } // namespace SpiderLeg
} // namespace app::classes::types
