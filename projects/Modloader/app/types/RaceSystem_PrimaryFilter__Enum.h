#pragma once
#include <Modloader/app/structs/RaceSystem_PrimaryFilter__Enum.h>
#include <Modloader/app/structs/RaceSystem_PrimaryFilter__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceSystem_PrimaryFilter__Enum {
        inline app::RaceSystem_PrimaryFilter__Enum__Class** type_info() {
            static app::RaceSystem_PrimaryFilter__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceSystem_PrimaryFilter__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceSystem_PrimaryFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_PrimaryFilter__Enum__Class>(type_info(), "", "RaceSystem", "PrimaryFilter");
        }
        inline app::RaceSystem_PrimaryFilter__Enum* create() {
            return il2cpp::create_object<app::RaceSystem_PrimaryFilter__Enum>(get_class());
        }
    } // namespace RaceSystem_PrimaryFilter__Enum
} // namespace app::classes::types
