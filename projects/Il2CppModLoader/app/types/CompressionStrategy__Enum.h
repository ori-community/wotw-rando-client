#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompressionStrategy__Enum {
        namespace {
            app::CompressionStrategy__Enum__Class* type_info_ref = nullptr;
        }
        app::CompressionStrategy__Enum__Class** type_info = &type_info_ref;
        inline app::CompressionStrategy__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompressionStrategy__Enum__Class>(type_info, "Ionic.Zlib", "CompressionStrategy");
        }
        inline app::CompressionStrategy__Enum* create() {
            return il2cpp::create_object<app::CompressionStrategy__Enum>(get_class());
        }
    } // namespace CompressionStrategy__Enum
} // namespace app::classes::types
