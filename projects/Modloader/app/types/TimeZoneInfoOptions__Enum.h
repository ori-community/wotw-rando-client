#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeZoneInfoOptions__Enum__Class.h>
#include <Modloader/app/structs/TimeZoneInfoOptions__Enum.h>

namespace app::classes::types {
    namespace TimeZoneInfoOptions__Enum {
        namespace {
            inline app::TimeZoneInfoOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimeZoneInfoOptions__Enum__Class** type_info = &type_info_ref;
        inline app::TimeZoneInfoOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfoOptions__Enum__Class>(type_info, "System", "TimeZoneInfoOptions");
        }
        inline app::TimeZoneInfoOptions__Enum* create() {
            return il2cpp::create_object<app::TimeZoneInfoOptions__Enum>(get_class());
        }
    } // namespace TimeZoneInfoOptions__Enum
} // namespace app::classes::types
