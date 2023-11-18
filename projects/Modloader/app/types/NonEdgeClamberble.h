#pragma once
#include <Modloader/app/structs/NonEdgeClamberble.h>
#include <Modloader/app/structs/NonEdgeClamberble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonEdgeClamberble {
        inline app::NonEdgeClamberble__Class** type_info() {
            static app::NonEdgeClamberble__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NonEdgeClamberble__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NonEdgeClamberble__Class* get_class() {
            return il2cpp::get_class<app::NonEdgeClamberble__Class>(type_info(), "", "NonEdgeClamberble");
        }
        inline app::NonEdgeClamberble* create() {
            return il2cpp::create_object<app::NonEdgeClamberble>(get_class());
        }
    } // namespace NonEdgeClamberble
} // namespace app::classes::types
