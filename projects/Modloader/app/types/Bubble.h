#pragma once
#include <Modloader/app/structs/Bubble.h>
#include <Modloader/app/structs/Bubble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bubble {
        inline app::Bubble__Class** type_info() {
            static app::Bubble__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bubble__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bubble__Class* get_class() {
            return il2cpp::get_class<app::Bubble__Class>(type_info(), "", "Bubble");
        }
        inline app::Bubble* create() {
            return il2cpp::create_object<app::Bubble>(get_class());
        }
    } // namespace Bubble
} // namespace app::classes::types
