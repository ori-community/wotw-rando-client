#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompressionMode__Enum_2 {
        namespace {
            app::CompressionMode__Enum_2__Class* type_info_ref = nullptr;
        }
        app::CompressionMode__Enum_2__Class** type_info = &type_info_ref;
        inline app::CompressionMode__Enum_2__Class* get_class() {
            return il2cpp::get_class<app::CompressionMode__Enum_2__Class>(type_info, "Unity.IO.Compression", "CompressionMode");
        }
        inline app::CompressionMode__Enum_2* create() {
            return il2cpp::create_object<app::CompressionMode__Enum_2>(get_class());
        }
    } // namespace CompressionMode__Enum_2
} // namespace app::classes::types
