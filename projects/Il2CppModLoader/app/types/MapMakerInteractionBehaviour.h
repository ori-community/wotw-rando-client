#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapMakerInteractionBehaviour {
        namespace {
            app::MapMakerInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MapMakerInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerInteractionBehaviour__Class>(type_info, "Moon", "MapMakerInteractionBehaviour");
        }
        inline app::MapMakerInteractionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerInteractionBehaviour>(get_class());
        }
    } // namespace MapMakerInteractionBehaviour
} // namespace app::classes::types
