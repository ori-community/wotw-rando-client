#pragma once
#include <Modloader/app/structs/Levels_Channel__Enum.h>
#include <Modloader/app/structs/Levels_Channel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Levels_Channel__Enum {
        inline app::Levels_Channel__Enum__Class** type_info() {
            static app::Levels_Channel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Levels_Channel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Levels_Channel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Levels_Channel__Enum__Class>(type_info(), "Colorful", "Levels", "Channel");
        }
        inline app::Levels_Channel__Enum* create() {
            return il2cpp::create_object<app::Levels_Channel__Enum>(get_class());
        }
    } // namespace Levels_Channel__Enum
} // namespace app::classes::types
