#pragma once
#include <Modloader/app/structs/BuilderIdle.h>
#include <Modloader/app/structs/BuilderIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderIdle {
        inline app::BuilderIdle__Class** type_info() {
            static app::BuilderIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuilderIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuilderIdle__Class* get_class() {
            return il2cpp::get_class<app::BuilderIdle__Class>(type_info(), "", "BuilderIdle");
        }
        inline app::BuilderIdle* create() {
            return il2cpp::create_object<app::BuilderIdle>(get_class());
        }
    } // namespace BuilderIdle
} // namespace app::classes::types
