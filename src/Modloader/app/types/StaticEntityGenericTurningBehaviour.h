#pragma once
#include <Modloader/app/structs/StaticEntityGenericTurningBehaviour.h>
#include <Modloader/app/structs/StaticEntityGenericTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticEntityGenericTurningBehaviour {
        inline app::StaticEntityGenericTurningBehaviour__Class** type_info() {
            static app::StaticEntityGenericTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaticEntityGenericTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaticEntityGenericTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityGenericTurningBehaviour__Class>(type_info(), "", "StaticEntityGenericTurningBehaviour");
        }
        inline app::StaticEntityGenericTurningBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityGenericTurningBehaviour>(get_class());
        }
    } // namespace StaticEntityGenericTurningBehaviour
} // namespace app::classes::types
