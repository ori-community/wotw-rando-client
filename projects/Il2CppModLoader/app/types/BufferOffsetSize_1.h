#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BufferOffsetSize_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BufferOffsetSize_1__Class** type_info;
        inline app::BufferOffsetSize_1__Class* get_class() {
            return il2cpp::get_class<app::BufferOffsetSize_1__Class>(type_info, "System.Net", "BufferOffsetSize");
        }
        inline app::BufferOffsetSize_1* create() {
            return il2cpp::create_object<app::BufferOffsetSize_1>(get_class());
        }
        inline app::BufferOffsetSize_1__Array* create_array(int size) {
            return il2cpp::array_new<app::BufferOffsetSize_1__Array>(get_class(), size);
        }
    } // namespace BufferOffsetSize_1
} // namespace app::classes::types
