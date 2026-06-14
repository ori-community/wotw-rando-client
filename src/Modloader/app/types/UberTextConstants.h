#pragma once
#include <Modloader/app/structs/UberTextConstants.h>
#include <Modloader/app/structs/UberTextConstants__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTextConstants {
        inline app::UberTextConstants__Class** type_info() {
            static app::UberTextConstants__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTextConstants__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTextConstants__Class* get_class() {
            return il2cpp::get_class<app::UberTextConstants__Class>(type_info(), "", "UberTextConstants");
        }
        inline app::UberTextConstants* create() {
            return il2cpp::create_object<app::UberTextConstants>(get_class());
        }
    } // namespace UberTextConstants
} // namespace app::classes::types
