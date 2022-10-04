#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrigger {
        namespace {
            app::ITrigger__Class* type_info_ref = nullptr;
        }
        app::ITrigger__Class** type_info = &type_info_ref;
        inline app::ITrigger__Class* get_class() {
            return il2cpp::get_class<app::ITrigger__Class>(type_info, "Moon.InteractionGraph", "ITrigger");
        }
        inline app::ITrigger* create() {
            return il2cpp::create_object<app::ITrigger>(get_class());
        }
    } // namespace ITrigger
} // namespace app::classes::types
