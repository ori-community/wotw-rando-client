#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EncoderExceptionFallbackBuffer__Class.h>
#include <Modloader/app/structs/EncoderExceptionFallbackBuffer.h>

namespace app::classes::types {
    namespace EncoderExceptionFallbackBuffer {
        inline app::EncoderExceptionFallbackBuffer__Class** type_info = (app::EncoderExceptionFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04725E90));
        inline app::EncoderExceptionFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderExceptionFallbackBuffer__Class>(type_info, "System.Text", "EncoderExceptionFallbackBuffer");
        }
        inline app::EncoderExceptionFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderExceptionFallbackBuffer>(get_class());
        }
    } // namespace EncoderExceptionFallbackBuffer
} // namespace app::classes::types
