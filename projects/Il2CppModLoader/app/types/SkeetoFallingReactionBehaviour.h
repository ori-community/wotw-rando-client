#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoFallingReactionBehaviour {
        namespace {
            app::SkeetoFallingReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SkeetoFallingReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoFallingReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoFallingReactionBehaviour__Class>(type_info, "", "SkeetoFallingReactionBehaviour");
        }
        inline app::SkeetoFallingReactionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoFallingReactionBehaviour>(get_class());
        }
    } // namespace SkeetoFallingReactionBehaviour
} // namespace app::classes::types
