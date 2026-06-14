#pragma once
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/HandoverMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandoverMode__Enum {
        inline app::HandoverMode__Enum__Class** type_info() {
            static app::HandoverMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandoverMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandoverMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandoverMode__Enum__Class>(type_info(), "Moon.Timeline", "HandoverMode");
        }
        inline app::HandoverMode__Enum* create() {
            return il2cpp::create_object<app::HandoverMode__Enum>(get_class());
        }
    } // namespace HandoverMode__Enum
} // namespace app::classes::types
