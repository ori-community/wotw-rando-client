#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadState__Enum__Class** type_info;
        inline app::ThreadState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThreadState__Enum__Class>(type_info, "System.Threading", "ThreadState");
        }
        inline app::ThreadState__Enum* create() {
            return il2cpp::create_object<app::ThreadState__Enum>(get_class());
        }
    } // namespace ThreadState__Enum
} // namespace app::classes::types
