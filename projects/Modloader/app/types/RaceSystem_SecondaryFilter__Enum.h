#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSystem_SecondaryFilter__Enum {
        namespace {
            inline app::RaceSystem_SecondaryFilter__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RaceSystem_SecondaryFilter__Enum__Class** type_info = &type_info_ref;
        inline app::RaceSystem_SecondaryFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_SecondaryFilter__Enum__Class>(type_info, "", "RaceSystem", "SecondaryFilter");
        }
        inline app::RaceSystem_SecondaryFilter__Enum* create() {
            return il2cpp::create_object<app::RaceSystem_SecondaryFilter__Enum>(get_class());
        }
    } // namespace RaceSystem_SecondaryFilter__Enum
} // namespace app::classes::types
