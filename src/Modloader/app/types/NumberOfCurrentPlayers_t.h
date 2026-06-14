#pragma once
#include <Modloader/app/structs/NumberOfCurrentPlayers_t.h>
#include <Modloader/app/structs/NumberOfCurrentPlayers_t__Boxed.h>
#include <Modloader/app/structs/NumberOfCurrentPlayers_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumberOfCurrentPlayers_t {
        inline app::NumberOfCurrentPlayers_t__Class** type_info() {
            static app::NumberOfCurrentPlayers_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NumberOfCurrentPlayers_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NumberOfCurrentPlayers_t__Class* get_class() {
            return il2cpp::get_class<app::NumberOfCurrentPlayers_t__Class>(type_info(), "Steamworks", "NumberOfCurrentPlayers_t");
        }
        inline app::NumberOfCurrentPlayers_t* create() {
            return il2cpp::create_object<app::NumberOfCurrentPlayers_t>(get_class());
        }
        inline app::NumberOfCurrentPlayers_t__Boxed* box(app::NumberOfCurrentPlayers_t value) {
            return il2cpp::box_value<app::NumberOfCurrentPlayers_t__Boxed>(get_class(), value);
        }
    } // namespace NumberOfCurrentPlayers_t
} // namespace app::classes::types
