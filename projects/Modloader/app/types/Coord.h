#pragma once
#include <Modloader/app/structs/Coord.h>
#include <Modloader/app/structs/Coord__Boxed.h>
#include <Modloader/app/structs/Coord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Coord {
        inline app::Coord__Class** type_info() {
            static app::Coord__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Coord__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Coord__Class* get_class() {
            return il2cpp::get_class<app::Coord__Class>(type_info(), "System", "Coord");
        }
        inline app::Coord* create() {
            return il2cpp::create_object<app::Coord>(get_class());
        }
        inline app::Coord__Boxed* box(app::Coord value) {
            return il2cpp::box_value<app::Coord__Boxed>(get_class(), value);
        }
    } // namespace Coord
} // namespace app::classes::types
