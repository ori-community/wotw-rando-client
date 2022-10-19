#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntityTask {
        namespace {
            inline app::TimelineEntityTask__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntityTask__Class** type_info = &type_info_ref;
        inline app::TimelineEntityTask__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityTask__Class>(type_info, "", "TimelineEntityTask");
        }
        inline app::TimelineEntityTask* create() {
            return il2cpp::create_object<app::TimelineEntityTask>(get_class());
        }
    } // namespace TimelineEntityTask
} // namespace app::classes::types
