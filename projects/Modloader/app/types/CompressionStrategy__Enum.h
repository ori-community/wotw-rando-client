#pragma once
#include <Modloader/app/structs/CompressionStrategy__Enum.h>
#include <Modloader/app/structs/CompressionStrategy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompressionStrategy__Enum {
        inline app::CompressionStrategy__Enum__Class** type_info() {
            static app::CompressionStrategy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompressionStrategy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompressionStrategy__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompressionStrategy__Enum__Class>(type_info(), "Ionic.Zlib", "CompressionStrategy");
        }
        inline app::CompressionStrategy__Enum* create() {
            return il2cpp::create_object<app::CompressionStrategy__Enum>(get_class());
        }
    } // namespace CompressionStrategy__Enum
} // namespace app::classes::types
