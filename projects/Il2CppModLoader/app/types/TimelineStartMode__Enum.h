#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineStartMode__Enum {
        namespace {
            inline app::TimelineStartMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimelineStartMode__Enum__Class** type_info = &type_info_ref;
        inline app::TimelineStartMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimelineStartMode__Enum__Class>(type_info, "Moon.Timeline", "TimelineStartMode");
        }
        inline app::TimelineStartMode__Enum* create() {
            return il2cpp::create_object<app::TimelineStartMode__Enum>(get_class());
        }
    } // namespace TimelineStartMode__Enum
} // namespace app::classes::types
