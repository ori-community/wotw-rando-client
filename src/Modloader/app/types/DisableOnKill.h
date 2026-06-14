#pragma once
#include <Modloader/app/structs/DisableOnKill.h>
#include <Modloader/app/structs/DisableOnKill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableOnKill {
        inline app::DisableOnKill__Class** type_info() {
            static app::DisableOnKill__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableOnKill__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableOnKill__Class* get_class() {
            return il2cpp::get_class<app::DisableOnKill__Class>(type_info(), "", "DisableOnKill");
        }
        inline app::DisableOnKill* create() {
            return il2cpp::create_object<app::DisableOnKill>(get_class());
        }
    } // namespace DisableOnKill
} // namespace app::classes::types
