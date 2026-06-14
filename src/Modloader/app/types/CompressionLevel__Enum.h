#pragma once
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/CompressionLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompressionLevel__Enum {
        inline app::CompressionLevel__Enum__Class** type_info() {
            static app::CompressionLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompressionLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompressionLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompressionLevel__Enum__Class>(type_info(), "Ionic.Zlib", "CompressionLevel");
        }
        inline app::CompressionLevel__Enum* create() {
            return il2cpp::create_object<app::CompressionLevel__Enum>(get_class());
        }
    } // namespace CompressionLevel__Enum
} // namespace app::classes::types
