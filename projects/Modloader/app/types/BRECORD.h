#pragma once
#include <Modloader/app/structs/BRECORD.h>
#include <Modloader/app/structs/BRECORD__Boxed.h>
#include <Modloader/app/structs/BRECORD__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BRECORD {
        inline app::BRECORD__Class** type_info() {
            static app::BRECORD__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BRECORD__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BRECORD__Class* get_class() {
            return il2cpp::get_class<app::BRECORD__Class>(type_info(), "System", "BRECORD");
        }
        inline app::BRECORD* create() {
            return il2cpp::create_object<app::BRECORD>(get_class());
        }
        inline app::BRECORD__Boxed* box(app::BRECORD value) {
            return il2cpp::box_value<app::BRECORD__Boxed>(get_class(), value);
        }
    } // namespace BRECORD
} // namespace app::classes::types
