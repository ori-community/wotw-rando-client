#pragma once
#include <Modloader/app/structs/VerticalSpacer.h>
#include <Modloader/app/structs/VerticalSpacer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalSpacer {
        inline app::VerticalSpacer__Class** type_info() {
            static app::VerticalSpacer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerticalSpacer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerticalSpacer__Class* get_class() {
            return il2cpp::get_class<app::VerticalSpacer__Class>(type_info(), "", "VerticalSpacer");
        }
        inline app::VerticalSpacer* create() {
            return il2cpp::create_object<app::VerticalSpacer>(get_class());
        }
    } // namespace VerticalSpacer
} // namespace app::classes::types
