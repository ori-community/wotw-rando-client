#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapMakerDidNotBuyBehaviour {
        namespace {
            app::MapMakerDidNotBuyBehaviour__Class* type_info_ref = nullptr;
        }
        app::MapMakerDidNotBuyBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerDidNotBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerDidNotBuyBehaviour__Class>(type_info, "Moon", "MapMakerDidNotBuyBehaviour");
        }
        inline app::MapMakerDidNotBuyBehaviour* create() {
            return il2cpp::create_object<app::MapMakerDidNotBuyBehaviour>(get_class());
        }
    } // namespace MapMakerDidNotBuyBehaviour
} // namespace app::classes::types
