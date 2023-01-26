#pragma once
#include <Modloader/app/structs/BaseNumberConverter.h>
#include <Modloader/app/structs/BaseNumberConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseNumberConverter {
        inline app::BaseNumberConverter__Class** type_info() {
            static app::BaseNumberConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseNumberConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseNumberConverter__Class* get_class() {
            return il2cpp::get_class<app::BaseNumberConverter__Class>(type_info(), "System.ComponentModel", "BaseNumberConverter");
        }
        inline app::BaseNumberConverter* create() {
            return il2cpp::create_object<app::BaseNumberConverter>(get_class());
        }
    } // namespace BaseNumberConverter
} // namespace app::classes::types
