#pragma once
#include <Modloader/app/structs/GlobalPlaceholderCountData.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData {
        inline app::GlobalPlaceholderCountData__Class** type_info() {
            static app::GlobalPlaceholderCountData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalPlaceholderCountData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalPlaceholderCountData__Class* get_class() {
            return il2cpp::get_class<app::GlobalPlaceholderCountData__Class>(type_info(), "", "GlobalPlaceholderCountData");
        }
        inline app::GlobalPlaceholderCountData* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData>(get_class());
        }
    } // namespace GlobalPlaceholderCountData
} // namespace app::classes::types
