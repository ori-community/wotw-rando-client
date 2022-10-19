#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StopWatchWrapper {
        namespace {
            inline app::StopWatchWrapper__Class* type_info_ref = nullptr;
        }
        inline app::StopWatchWrapper__Class** type_info = &type_info_ref;
        inline app::StopWatchWrapper__Class* get_class() {
            return il2cpp::get_class<app::StopWatchWrapper__Class>(type_info, "", "StopWatchWrapper");
        }
        inline app::StopWatchWrapper* create() {
            return il2cpp::create_object<app::StopWatchWrapper>(get_class());
        }
    } // namespace StopWatchWrapper
} // namespace app::classes::types
