#pragma once
#include <Modloader/app/structs/SeinIdle.h>
#include <Modloader/app/structs/SeinIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinIdle {
        inline app::SeinIdle__Class** type_info() {
            static app::SeinIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinIdle__Class* get_class() {
            return il2cpp::get_class<app::SeinIdle__Class>(type_info(), "", "SeinIdle");
        }
        inline app::SeinIdle* create() {
            return il2cpp::create_object<app::SeinIdle>(get_class());
        }
    } // namespace SeinIdle
} // namespace app::classes::types
