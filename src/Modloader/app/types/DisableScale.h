#pragma once
#include <Modloader/app/structs/DisableScale.h>
#include <Modloader/app/structs/DisableScale__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableScale {
        inline app::DisableScale__Class** type_info() {
            static app::DisableScale__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableScale__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableScale__Class* get_class() {
            return il2cpp::get_class<app::DisableScale__Class>(type_info(), "", "DisableScale");
        }
        inline app::DisableScale* create() {
            return il2cpp::create_object<app::DisableScale>(get_class());
        }
    } // namespace DisableScale
} // namespace app::classes::types
