#pragma once
#include <Modloader/app/structs/HueFocus.h>
#include <Modloader/app/structs/HueFocus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HueFocus {
        inline app::HueFocus__Class** type_info() {
            static app::HueFocus__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HueFocus__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HueFocus__Class* get_class() {
            return il2cpp::get_class<app::HueFocus__Class>(type_info(), "Colorful", "HueFocus");
        }
        inline app::HueFocus* create() {
            return il2cpp::create_object<app::HueFocus>(get_class());
        }
    } // namespace HueFocus
} // namespace app::classes::types
