#pragma once
#include <Modloader/app/structs/RaceSystem_SecondaryFilter__Enum.h>
#include <Modloader/app/structs/RaceSystem_SecondaryFilter__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceSystem_SecondaryFilter__Enum {
        inline app::RaceSystem_SecondaryFilter__Enum__Class** type_info() {
            static app::RaceSystem_SecondaryFilter__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceSystem_SecondaryFilter__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceSystem_SecondaryFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_SecondaryFilter__Enum__Class>(type_info(), "", "RaceSystem", "SecondaryFilter");
        }
        inline app::RaceSystem_SecondaryFilter__Enum* create() {
            return il2cpp::create_object<app::RaceSystem_SecondaryFilter__Enum>(get_class());
        }
    } // namespace RaceSystem_SecondaryFilter__Enum
} // namespace app::classes::types
