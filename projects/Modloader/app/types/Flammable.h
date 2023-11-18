#pragma once
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/Flammable__Array.h>
#include <Modloader/app/structs/Flammable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Flammable {
        inline app::Flammable__Class** type_info() {
            static app::Flammable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Flammable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Flammable__Class* get_class() {
            return il2cpp::get_class<app::Flammable__Class>(type_info(), "Moon", "Flammable");
        }
        inline app::Flammable* create() {
            return il2cpp::create_object<app::Flammable>(get_class());
        }
        inline app::Flammable__Array* create_array(int size) {
            return il2cpp::array_new<app::Flammable__Array>(get_class(), size);
        }
        inline app::Flammable__Array* create_array(const std::vector<app::Flammable*>& items) {
            return il2cpp::array_new<app::Flammable__Array>(get_class(), items);
        }
    } // namespace Flammable
} // namespace app::classes::types
