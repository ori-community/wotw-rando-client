#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _EventInfo {
        namespace {
            app::_EventInfo__Class* type_info_ref = nullptr;
        }
        app::_EventInfo__Class** type_info = &type_info_ref;
        inline app::_EventInfo__Class* get_class() {
            return il2cpp::get_class<app::_EventInfo__Class>(type_info, "System.Runtime.InteropServices", "_EventInfo");
        }
        inline app::_EventInfo* create() {
            return il2cpp::create_object<app::_EventInfo>(get_class());
        }
    } // namespace _EventInfo
} // namespace app::classes::types
