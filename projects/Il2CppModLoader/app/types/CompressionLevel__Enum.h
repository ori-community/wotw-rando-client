#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompressionLevel__Enum {
        namespace {
            app::CompressionLevel__Enum__Class* type_info_ref = nullptr;
        }
        app::CompressionLevel__Enum__Class** type_info = &type_info_ref;
        inline app::CompressionLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompressionLevel__Enum__Class>(type_info, "Ionic.Zlib", "CompressionLevel");
        }
        inline app::CompressionLevel__Enum* create() {
            return il2cpp::create_object<app::CompressionLevel__Enum>(get_class());
        }
    } // namespace CompressionLevel__Enum
} // namespace app::classes::types
