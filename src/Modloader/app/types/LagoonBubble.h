#pragma once
#include <Modloader/app/structs/LagoonBubble.h>
#include <Modloader/app/structs/LagoonBubble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LagoonBubble {
        inline app::LagoonBubble__Class** type_info() {
            static app::LagoonBubble__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LagoonBubble__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LagoonBubble__Class* get_class() {
            return il2cpp::get_class<app::LagoonBubble__Class>(type_info(), "", "LagoonBubble");
        }
        inline app::LagoonBubble* create() {
            return il2cpp::create_object<app::LagoonBubble>(get_class());
        }
    } // namespace LagoonBubble
} // namespace app::classes::types
