#pragma once
#include <Modloader/app/structs/DesertEscapeWormPathFollower.h>
#include <Modloader/app/structs/DesertEscapeWormPathFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWormPathFollower {
        inline app::DesertEscapeWormPathFollower__Class** type_info() {
            static app::DesertEscapeWormPathFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesertEscapeWormPathFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesertEscapeWormPathFollower__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWormPathFollower__Class>(type_info(), "", "DesertEscapeWormPathFollower");
        }
        inline app::DesertEscapeWormPathFollower* create() {
            return il2cpp::create_object<app::DesertEscapeWormPathFollower>(get_class());
        }
    } // namespace DesertEscapeWormPathFollower
} // namespace app::classes::types
