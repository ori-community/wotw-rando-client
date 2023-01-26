#pragma once
#include <Modloader/app/structs/GZipDecoder_GzipHeaderState__Enum.h>
#include <Modloader/app/structs/GZipDecoder_GzipHeaderState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GZipDecoder_GzipHeaderState__Enum {
        inline app::GZipDecoder_GzipHeaderState__Enum__Class** type_info() {
            static app::GZipDecoder_GzipHeaderState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GZipDecoder_GzipHeaderState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GZipDecoder_GzipHeaderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GZipDecoder_GzipHeaderState__Enum__Class>(type_info(), "Unity.IO.Compression", "GZipDecoder", "GzipHeaderState");
        }
        inline app::GZipDecoder_GzipHeaderState__Enum* create() {
            return il2cpp::create_object<app::GZipDecoder_GzipHeaderState__Enum>(get_class());
        }
    } // namespace GZipDecoder_GzipHeaderState__Enum
} // namespace app::classes::types
