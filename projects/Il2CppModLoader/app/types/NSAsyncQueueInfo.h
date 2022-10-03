#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NSAsyncQueueInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NSAsyncQueueInfo__Class** type_info;
        inline app::NSAsyncQueueInfo__Class* get_class() {
            return il2cpp::get_class<app::NSAsyncQueueInfo__Class>(type_info, "", "NSAsyncQueueInfo");
        }
        inline app::NSAsyncQueueInfo* create() {
            return il2cpp::create_object<app::NSAsyncQueueInfo>(get_class());
        }
        inline app::NSAsyncQueueInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::NSAsyncQueueInfo__Array>(get_class(), size);
        }
    } // namespace NSAsyncQueueInfo
} // namespace app::classes::types
