#pragma once
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/OrbSpawner__Array.h>
#include <Modloader/app/structs/OrbSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawner {
        inline app::OrbSpawner__Class** type_info() {
            static app::OrbSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrbSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrbSpawner__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawner__Class>(type_info(), "", "OrbSpawner");
        }
        inline app::OrbSpawner* create() {
            return il2cpp::create_object<app::OrbSpawner>(get_class());
        }
        inline app::OrbSpawner__Array* create_array(int size) {
            return il2cpp::array_new<app::OrbSpawner__Array>(get_class(), size);
        }
        inline app::OrbSpawner__Array* create_array(const std::vector<app::OrbSpawner*>& items) {
            return il2cpp::array_new<app::OrbSpawner__Array>(get_class(), items);
        }
    } // namespace OrbSpawner
} // namespace app::classes::types
