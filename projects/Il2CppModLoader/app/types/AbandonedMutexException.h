#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbandonedMutexException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AbandonedMutexException__Class** type_info;
        inline app::AbandonedMutexException__Class* get_class() {
            return il2cpp::get_class<app::AbandonedMutexException__Class>(type_info, "System.Threading", "AbandonedMutexException");
        }
        inline app::AbandonedMutexException* create() {
            return il2cpp::create_object<app::AbandonedMutexException>(get_class());
        }
    } // namespace AbandonedMutexException
} // namespace app::classes::types
