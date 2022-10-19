#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XTaskQueuePort__Enum {
        namespace {
            inline app::XTaskQueuePort__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XTaskQueuePort__Enum__Class** type_info = &type_info_ref;
        inline app::XTaskQueuePort__Enum__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueuePort__Enum__Class>(type_info, "XGamingRuntime.Interop", "XTaskQueuePort");
        }
        inline app::XTaskQueuePort__Enum* create() {
            return il2cpp::create_object<app::XTaskQueuePort__Enum>(get_class());
        }
    } // namespace XTaskQueuePort__Enum
} // namespace app::classes::types
