#pragma once
#include <Modloader/app/structs/EndGameResultCallback_t.h>
#include <Modloader/app/structs/EndGameResultCallback_t__Boxed.h>
#include <Modloader/app/structs/EndGameResultCallback_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EndGameResultCallback_t {
        inline app::EndGameResultCallback_t__Class** type_info() {
            static app::EndGameResultCallback_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EndGameResultCallback_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EndGameResultCallback_t__Class* get_class() {
            return il2cpp::get_class<app::EndGameResultCallback_t__Class>(type_info(), "Steamworks", "EndGameResultCallback_t");
        }
        inline app::EndGameResultCallback_t* create() {
            return il2cpp::create_object<app::EndGameResultCallback_t>(get_class());
        }
        inline app::EndGameResultCallback_t__Boxed* box(app::EndGameResultCallback_t value) {
            return il2cpp::box_value<app::EndGameResultCallback_t__Boxed>(get_class(), value);
        }
    } // namespace EndGameResultCallback_t
} // namespace app::classes::types
