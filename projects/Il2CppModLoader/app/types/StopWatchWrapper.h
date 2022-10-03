#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StopWatchWrapper {
        namespace {
            app::StopWatchWrapper__Class* type_info_ref = nullptr;
        }
        app::StopWatchWrapper__Class** type_info = &type_info_ref;
        inline app::StopWatchWrapper__Class* get_class() {
            return il2cpp::get_class<app::StopWatchWrapper__Class>(type_info, "", "StopWatchWrapper");
        }
        inline app::StopWatchWrapper* create() {
            return il2cpp::create_object<app::StopWatchWrapper>(get_class());
        }
    } // namespace StopWatchWrapper
} // namespace app::classes::types
