#pragma once
#include <Modloader/app/structs/SmallInteractivesPlaceholder.h>
#include <Modloader/app/structs/SmallInteractivesPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallInteractivesPlaceholder {
        inline app::SmallInteractivesPlaceholder__Class** type_info() {
            static app::SmallInteractivesPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmallInteractivesPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmallInteractivesPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SmallInteractivesPlaceholder__Class>(type_info(), "", "SmallInteractivesPlaceholder");
        }
        inline app::SmallInteractivesPlaceholder* create() {
            return il2cpp::create_object<app::SmallInteractivesPlaceholder>(get_class());
        }
    } // namespace SmallInteractivesPlaceholder
} // namespace app::classes::types
