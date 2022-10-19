#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteStreamClosedEventHandler {
        namespace {
            inline app::WriteStreamClosedEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::WriteStreamClosedEventHandler__Class** type_info = &type_info_ref;
        inline app::WriteStreamClosedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::WriteStreamClosedEventHandler__Class>(type_info, "System.Net", "WriteStreamClosedEventHandler");
        }
        inline app::WriteStreamClosedEventHandler* create() {
            return il2cpp::create_object<app::WriteStreamClosedEventHandler>(get_class());
        }
    } // namespace WriteStreamClosedEventHandler
} // namespace app::classes::types
