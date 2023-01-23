#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompressionMode__Enum_1__Class.h>
#include <Modloader/app/structs/CompressionMode__Enum_1.h>

namespace app::classes::types {
    namespace CompressionMode__Enum_1 {
        namespace {
            inline app::CompressionMode__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::CompressionMode__Enum_1__Class** type_info = &type_info_ref;
        inline app::CompressionMode__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::CompressionMode__Enum_1__Class>(type_info, "Ionic.Zlib", "CompressionMode");
        }
        inline app::CompressionMode__Enum_1* create() {
            return il2cpp::create_object<app::CompressionMode__Enum_1>(get_class());
        }
    } // namespace CompressionMode__Enum_1
} // namespace app::classes::types
