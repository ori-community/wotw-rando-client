#pragma once
#include <Modloader/app/structs/GZipDecoder_GZipOptionalHeaderFlags__Enum.h>
#include <Modloader/app/structs/GZipDecoder_GZipOptionalHeaderFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GZipDecoder_GZipOptionalHeaderFlags__Enum {
        inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class** type_info() {
            static app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class>(type_info(), "Unity.IO.Compression", "GZipDecoder", "GZipOptionalHeaderFlags");
        }
        inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum* create() {
            return il2cpp::create_object<app::GZipDecoder_GZipOptionalHeaderFlags__Enum>(get_class());
        }
    } // namespace GZipDecoder_GZipOptionalHeaderFlags__Enum
} // namespace app::classes::types
