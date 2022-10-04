#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IThreadPoolWorkItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IThreadPoolWorkItem__Class** type_info;
        inline app::IThreadPoolWorkItem__Class* get_class() {
            return il2cpp::get_class<app::IThreadPoolWorkItem__Class>(type_info, "System.Threading", "IThreadPoolWorkItem");
        }
        inline app::IThreadPoolWorkItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IThreadPoolWorkItem__Array>(get_class(), size);
        }
    } // namespace IThreadPoolWorkItem
} // namespace app::classes::types
