#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeUtility {
        namespace {
            inline app::TimeUtility__Class* type_info_ref = nullptr;
        }
        inline app::TimeUtility__Class** type_info = &type_info_ref;
        inline app::TimeUtility__Class* get_class() {
            return il2cpp::get_class<app::TimeUtility__Class>(type_info, "", "TimeUtility");
        }
        inline app::TimeUtility* create() {
            return il2cpp::create_object<app::TimeUtility>(get_class());
        }
    } // namespace TimeUtility
} // namespace app::classes::types
