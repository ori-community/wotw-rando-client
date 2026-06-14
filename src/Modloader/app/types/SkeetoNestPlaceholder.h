#pragma once
#include <Modloader/app/structs/SkeetoNestPlaceholder.h>
#include <Modloader/app/structs/SkeetoNestPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoNestPlaceholder {
        inline app::SkeetoNestPlaceholder__Class** type_info() {
            static app::SkeetoNestPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoNestPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoNestPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestPlaceholder__Class>(type_info(), "", "SkeetoNestPlaceholder");
        }
        inline app::SkeetoNestPlaceholder* create() {
            return il2cpp::create_object<app::SkeetoNestPlaceholder>(get_class());
        }
    } // namespace SkeetoNestPlaceholder
} // namespace app::classes::types
