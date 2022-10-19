#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderHandler {
        namespace {
            inline app::HeaderHandler__Class* type_info_ref = nullptr;
        }
        inline app::HeaderHandler__Class** type_info = &type_info_ref;
        inline app::HeaderHandler__Class* get_class() {
            return il2cpp::get_class<app::HeaderHandler__Class>(type_info, "System.Runtime.Remoting.Messaging", "HeaderHandler");
        }
        inline app::HeaderHandler* create() {
            return il2cpp::create_object<app::HeaderHandler>(get_class());
        }
    } // namespace HeaderHandler
} // namespace app::classes::types
