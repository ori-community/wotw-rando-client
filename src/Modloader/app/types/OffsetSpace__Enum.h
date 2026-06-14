#pragma once
#include <Modloader/app/structs/OffsetSpace__Enum.h>
#include <Modloader/app/structs/OffsetSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetSpace__Enum {
        inline app::OffsetSpace__Enum__Class** type_info() {
            static app::OffsetSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetSpace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::OffsetSpace__Enum__Class>(type_info(), "Moon", "OffsetSpace");
        }
        inline app::OffsetSpace__Enum* create() {
            return il2cpp::create_object<app::OffsetSpace__Enum>(get_class());
        }
    } // namespace OffsetSpace__Enum
} // namespace app::classes::types
