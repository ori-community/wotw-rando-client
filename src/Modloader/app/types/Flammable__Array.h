#pragma once
#include <Modloader/app/structs/Flammable__Array.h>
#include <Modloader/app/structs/Flammable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Flammable__Array {
        inline app::Flammable__Array__Class** type_info() {
            static app::Flammable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Flammable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Flammable__Array__Class* get_class() {
            return il2cpp::get_class<app::Flammable__Array__Class>(type_info(), "Moon", "Flammable[]");
        }
        inline app::Flammable__Array* create() {
            return il2cpp::create_object<app::Flammable__Array>(get_class());
        }
    } // namespace Flammable__Array
} // namespace app::classes::types
