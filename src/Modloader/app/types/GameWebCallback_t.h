#pragma once
#include <Modloader/app/structs/GameWebCallback_t.h>
#include <Modloader/app/structs/GameWebCallback_t__Boxed.h>
#include <Modloader/app/structs/GameWebCallback_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWebCallback_t {
        inline app::GameWebCallback_t__Class** type_info() {
            static app::GameWebCallback_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameWebCallback_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameWebCallback_t__Class* get_class() {
            return il2cpp::get_class<app::GameWebCallback_t__Class>(type_info(), "Steamworks", "GameWebCallback_t");
        }
        inline app::GameWebCallback_t* create() {
            return il2cpp::create_object<app::GameWebCallback_t>(get_class());
        }
        inline app::GameWebCallback_t__Boxed* box(app::GameWebCallback_t value) {
            return il2cpp::box_value<app::GameWebCallback_t__Boxed>(get_class(), value);
        }
    } // namespace GameWebCallback_t
} // namespace app::classes::types
