#pragma once
#include <Modloader/app/structs/SkeetoStateSelector.h>
#include <Modloader/app/structs/SkeetoStateSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoStateSelector {
        inline app::SkeetoStateSelector__Class** type_info() {
            static app::SkeetoStateSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoStateSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoStateSelector__Class* get_class() {
            return il2cpp::get_class<app::SkeetoStateSelector__Class>(type_info(), "", "SkeetoStateSelector");
        }
        inline app::SkeetoStateSelector* create() {
            return il2cpp::create_object<app::SkeetoStateSelector>(get_class());
        }
    } // namespace SkeetoStateSelector
} // namespace app::classes::types
