#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HebrewNumber_HS__Enum__Class.h>
#include <Modloader/app/structs/HebrewNumber_HS__Enum.h>
#include <Modloader/app/structs/HebrewNumber_HS__Enum__Array.h>

namespace app::classes::types {
    namespace HebrewNumber_HS__Enum {
        namespace {
            inline app::HebrewNumber_HS__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HebrewNumber_HS__Enum__Class** type_info = &type_info_ref;
        inline app::HebrewNumber_HS__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HebrewNumber_HS__Enum__Class>(type_info, "System.Globalization", "HebrewNumber", "HS");
        }
        inline app::HebrewNumber_HS__Enum* create() {
            return il2cpp::create_object<app::HebrewNumber_HS__Enum>(get_class());
        }
        inline app::HebrewNumber_HS__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::HebrewNumber_HS__Enum__Array>(get_class(), size);
        }
        inline app::HebrewNumber_HS__Enum__Array* create_array(const std::vector<app::HebrewNumber_HS__Enum*>& items) {
            return il2cpp::array_new<app::HebrewNumber_HS__Enum__Array>(get_class(), items);
        }
    } // namespace HebrewNumber_HS__Enum
} // namespace app::classes::types
