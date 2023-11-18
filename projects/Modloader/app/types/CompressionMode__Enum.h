#pragma once
#include <Modloader/app/structs/CompressionMode__Enum.h>
#include <Modloader/app/structs/CompressionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompressionMode__Enum {
        inline app::CompressionMode__Enum__Class** type_info() {
            static app::CompressionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompressionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompressionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompressionMode__Enum__Class>(type_info(), "System.IO.Compression", "CompressionMode");
        }
        inline app::CompressionMode__Enum* create() {
            return il2cpp::create_object<app::CompressionMode__Enum>(get_class());
        }
    } // namespace CompressionMode__Enum
} // namespace app::classes::types
