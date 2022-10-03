#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IThreadPoolWorkItem__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IThreadPoolWorkItem__Array__Class** type_info;
        inline app::IThreadPoolWorkItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IThreadPoolWorkItem__Array__Class>(type_info, "System.Threading", "IThreadPoolWorkItem[]");
        }
        inline app::IThreadPoolWorkItem__Array* create() {
            return il2cpp::create_object<app::IThreadPoolWorkItem__Array>(get_class());
        }
    } // namespace IThreadPoolWorkItem__Array
} // namespace app::classes::types
