#pragma once
#include <Modloader/app/structs/RunOverride.h>
#include <Modloader/app/structs/RunOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunOverride {
        inline app::RunOverride__Class** type_info() {
            static app::RunOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RunOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RunOverride__Class* get_class() {
            return il2cpp::get_class<app::RunOverride__Class>(type_info(), "", "RunOverride");
        }
        inline app::RunOverride* create() {
            return il2cpp::create_object<app::RunOverride>(get_class());
        }
    } // namespace RunOverride
} // namespace app::classes::types
