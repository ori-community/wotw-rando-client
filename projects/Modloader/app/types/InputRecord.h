#pragma once
#include <Modloader/app/structs/InputRecord.h>
#include <Modloader/app/structs/InputRecord__Boxed.h>
#include <Modloader/app/structs/InputRecord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputRecord {
        inline app::InputRecord__Class** type_info() {
            static app::InputRecord__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputRecord__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputRecord__Class* get_class() {
            return il2cpp::get_class<app::InputRecord__Class>(type_info(), "System", "InputRecord");
        }
        inline app::InputRecord* create() {
            return il2cpp::create_object<app::InputRecord>(get_class());
        }
        inline app::InputRecord__Boxed* box(app::InputRecord value) {
            return il2cpp::box_value<app::InputRecord__Boxed>(get_class(), value);
        }
    } // namespace InputRecord
} // namespace app::classes::types
