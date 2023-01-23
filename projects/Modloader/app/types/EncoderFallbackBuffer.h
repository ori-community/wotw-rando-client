#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EncoderFallbackBuffer__Class.h>
#include <Modloader/app/structs/EncoderFallbackBuffer.h>

namespace app::classes::types {
    namespace EncoderFallbackBuffer {
        namespace {
            inline app::EncoderFallbackBuffer__Class* type_info_ref = nullptr;
        }
        inline app::EncoderFallbackBuffer__Class** type_info = &type_info_ref;
        inline app::EncoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallbackBuffer__Class>(type_info, "System.Text", "EncoderFallbackBuffer");
        }
        inline app::EncoderFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderFallbackBuffer>(get_class());
        }
    } // namespace EncoderFallbackBuffer
} // namespace app::classes::types
