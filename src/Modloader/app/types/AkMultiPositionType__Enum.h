#pragma once
#include <Modloader/app/structs/AkMultiPositionType__Enum.h>
#include <Modloader/app/structs/AkMultiPositionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMultiPositionType__Enum {
        inline app::AkMultiPositionType__Enum__Class** type_info() {
            static app::AkMultiPositionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMultiPositionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMultiPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMultiPositionType__Enum__Class>(type_info(), "", "AkMultiPositionType");
        }
        inline app::AkMultiPositionType__Enum* create() {
            return il2cpp::create_object<app::AkMultiPositionType__Enum>(get_class());
        }
    } // namespace AkMultiPositionType__Enum
} // namespace app::classes::types
