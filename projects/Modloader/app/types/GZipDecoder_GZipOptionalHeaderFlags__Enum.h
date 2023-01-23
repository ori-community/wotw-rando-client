#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GZipDecoder_GZipOptionalHeaderFlags__Enum__Class.h>
#include <Modloader/app/structs/GZipDecoder_GZipOptionalHeaderFlags__Enum.h>

namespace app::classes::types {
    namespace GZipDecoder_GZipOptionalHeaderFlags__Enum {
        namespace {
            inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class** type_info = &type_info_ref;
        inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GZipDecoder_GZipOptionalHeaderFlags__Enum__Class>(type_info, "Unity.IO.Compression", "GZipDecoder", "GZipOptionalHeaderFlags");
        }
        inline app::GZipDecoder_GZipOptionalHeaderFlags__Enum* create() {
            return il2cpp::create_object<app::GZipDecoder_GZipOptionalHeaderFlags__Enum>(get_class());
        }
    } // namespace GZipDecoder_GZipOptionalHeaderFlags__Enum
} // namespace app::classes::types
