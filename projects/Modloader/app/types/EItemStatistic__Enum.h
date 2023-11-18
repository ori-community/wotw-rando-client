#pragma once
#include <Modloader/app/structs/EItemStatistic__Enum.h>
#include <Modloader/app/structs/EItemStatistic__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EItemStatistic__Enum {
        inline app::EItemStatistic__Enum__Class** type_info() {
            static app::EItemStatistic__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EItemStatistic__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EItemStatistic__Enum__Class* get_class() {
            return il2cpp::get_class<app::EItemStatistic__Enum__Class>(type_info(), "Steamworks", "EItemStatistic");
        }
        inline app::EItemStatistic__Enum* create() {
            return il2cpp::create_object<app::EItemStatistic__Enum>(get_class());
        }
    } // namespace EItemStatistic__Enum
} // namespace app::classes::types
