#pragma once
#include <Modloader/app/structs/BubbleModifier.h>
#include <Modloader/app/structs/BubbleModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BubbleModifier {
        inline app::BubbleModifier__Class** type_info() {
            static app::BubbleModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BubbleModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BubbleModifier__Class* get_class() {
            return il2cpp::get_class<app::BubbleModifier__Class>(type_info(), "", "BubbleModifier");
        }
        inline app::BubbleModifier* create() {
            return il2cpp::create_object<app::BubbleModifier>(get_class());
        }
    } // namespace BubbleModifier
} // namespace app::classes::types
