#pragma once
#include <Modloader/app/structs/RecordableType__Enum.h>
#include <Modloader/app/structs/RecordableType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordableType__Enum {
        inline app::RecordableType__Enum__Class** type_info() {
            static app::RecordableType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordableType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordableType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RecordableType__Enum__Class>(type_info(), "Moon.Timeline", "RecordableType");
        }
        inline app::RecordableType__Enum* create() {
            return il2cpp::create_object<app::RecordableType__Enum>(get_class());
        }
    } // namespace RecordableType__Enum
} // namespace app::classes::types
