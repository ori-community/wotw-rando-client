#pragma once
#include <Modloader/app/structs/WandererStateSelector.h>
#include <Modloader/app/structs/WandererStateSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererStateSelector {
        inline app::WandererStateSelector__Class** type_info() {
            static app::WandererStateSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererStateSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererStateSelector__Class* get_class() {
            return il2cpp::get_class<app::WandererStateSelector__Class>(type_info(), "", "WandererStateSelector");
        }
        inline app::WandererStateSelector* create() {
            return il2cpp::create_object<app::WandererStateSelector>(get_class());
        }
    } // namespace WandererStateSelector
} // namespace app::classes::types
