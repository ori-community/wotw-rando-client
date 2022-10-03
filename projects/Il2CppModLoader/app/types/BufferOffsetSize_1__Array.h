#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BufferOffsetSize_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BufferOffsetSize_1__Array__Class** type_info;
        inline app::BufferOffsetSize_1__Array__Class* get_class() {
            return il2cpp::get_class<app::BufferOffsetSize_1__Array__Class>(type_info, "System.Net", "BufferOffsetSize[]");
        }
        inline app::BufferOffsetSize_1__Array* create() {
            return il2cpp::create_object<app::BufferOffsetSize_1__Array>(get_class());
        }
    } // namespace BufferOffsetSize_1__Array
} // namespace app::classes::types
