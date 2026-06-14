#pragma once
#include <Modloader/app/structs/DisableEmitterOnKill.h>
#include <Modloader/app/structs/DisableEmitterOnKill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableEmitterOnKill {
        inline app::DisableEmitterOnKill__Class** type_info() {
            static app::DisableEmitterOnKill__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableEmitterOnKill__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableEmitterOnKill__Class* get_class() {
            return il2cpp::get_class<app::DisableEmitterOnKill__Class>(type_info(), "", "DisableEmitterOnKill");
        }
        inline app::DisableEmitterOnKill* create() {
            return il2cpp::create_object<app::DisableEmitterOnKill>(get_class());
        }
    } // namespace DisableEmitterOnKill
} // namespace app::classes::types
