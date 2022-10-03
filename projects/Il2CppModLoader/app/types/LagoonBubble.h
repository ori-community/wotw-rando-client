#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LagoonBubble {
        namespace {
            app::LagoonBubble__Class* type_info_ref = nullptr;
        }
        app::LagoonBubble__Class** type_info = &type_info_ref;
        inline app::LagoonBubble__Class* get_class() {
            return il2cpp::get_class<app::LagoonBubble__Class>(type_info, "", "LagoonBubble");
        }
        inline app::LagoonBubble* create() {
            return il2cpp::create_object<app::LagoonBubble>(get_class());
        }
    } // namespace LagoonBubble
} // namespace app::classes::types
