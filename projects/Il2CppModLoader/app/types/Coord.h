#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Coord {
        namespace {
            app::Coord__Class* type_info_ref = nullptr;
        }
        app::Coord__Class** type_info = &type_info_ref;
        inline app::Coord__Class* get_class() {
            return il2cpp::get_class<app::Coord__Class>(type_info, "System", "Coord");
        }
        inline app::Coord* create() {
            return il2cpp::create_object<app::Coord>(get_class());
        }
        inline app::Coord__Boxed* box(app::Coord value) {
            return il2cpp::box_value<app::Coord__Boxed>(get_class(), value);
        }
    } // namespace Coord
} // namespace app::classes::types
