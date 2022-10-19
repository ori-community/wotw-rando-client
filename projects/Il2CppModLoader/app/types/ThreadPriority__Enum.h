#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadPriority__Enum {
        namespace {
            inline app::ThreadPriority__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ThreadPriority__Enum__Class** type_info = &type_info_ref;
        inline app::ThreadPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThreadPriority__Enum__Class>(type_info, "System.Threading", "ThreadPriority");
        }
        inline app::ThreadPriority__Enum* create() {
            return il2cpp::create_object<app::ThreadPriority__Enum>(get_class());
        }
    } // namespace ThreadPriority__Enum
} // namespace app::classes::types
