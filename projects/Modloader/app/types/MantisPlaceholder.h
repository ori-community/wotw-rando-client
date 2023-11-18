#pragma once
#include <Modloader/app/structs/MantisPlaceholder.h>
#include <Modloader/app/structs/MantisPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisPlaceholder {
        inline app::MantisPlaceholder__Class** type_info() {
            static app::MantisPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MantisPlaceholder__Class>(type_info(), "", "MantisPlaceholder");
        }
        inline app::MantisPlaceholder* create() {
            return il2cpp::create_object<app::MantisPlaceholder>(get_class());
        }
    } // namespace MantisPlaceholder
} // namespace app::classes::types
