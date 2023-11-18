#pragma once
#include <Modloader/app/structs/OrbSpawner__Array.h>
#include <Modloader/app/structs/OrbSpawner__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawner__Array {
        inline app::OrbSpawner__Array__Class** type_info() {
            static app::OrbSpawner__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrbSpawner__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrbSpawner__Array__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawner__Array__Class>(type_info(), "", "OrbSpawner[]");
        }
        inline app::OrbSpawner__Array* create() {
            return il2cpp::create_object<app::OrbSpawner__Array>(get_class());
        }
    } // namespace OrbSpawner__Array
} // namespace app::classes::types
