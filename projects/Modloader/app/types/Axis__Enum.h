#pragma once
#include <Modloader/app/structs/Axis__Enum.h>
#include <Modloader/app/structs/Axis__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Axis__Enum {
        inline app::Axis__Enum__Class** type_info() {
            static app::Axis__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Axis__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Axis__Enum__Class* get_class() {
            return il2cpp::get_class<app::Axis__Enum__Class>(type_info(), "RootMotion", "Axis");
        }
        inline app::Axis__Enum* create() {
            return il2cpp::create_object<app::Axis__Enum>(get_class());
        }
    } // namespace Axis__Enum
} // namespace app::classes::types
