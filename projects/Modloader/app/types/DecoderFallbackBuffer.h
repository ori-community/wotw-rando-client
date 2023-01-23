#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecoderFallbackBuffer__Class.h>
#include <Modloader/app/structs/DecoderFallbackBuffer.h>

namespace app::classes::types {
    namespace DecoderFallbackBuffer {
        namespace {
            inline app::DecoderFallbackBuffer__Class* type_info_ref = nullptr;
        }
        inline app::DecoderFallbackBuffer__Class** type_info = &type_info_ref;
        inline app::DecoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallbackBuffer__Class>(type_info, "System.Text", "DecoderFallbackBuffer");
        }
        inline app::DecoderFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderFallbackBuffer>(get_class());
        }
    } // namespace DecoderFallbackBuffer
} // namespace app::classes::types
