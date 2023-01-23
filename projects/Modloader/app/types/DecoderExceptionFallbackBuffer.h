#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecoderExceptionFallbackBuffer__Class.h>
#include <Modloader/app/structs/DecoderExceptionFallbackBuffer.h>

namespace app::classes::types {
    namespace DecoderExceptionFallbackBuffer {
        inline app::DecoderExceptionFallbackBuffer__Class** type_info = (app::DecoderExceptionFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04729630));
        inline app::DecoderExceptionFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderExceptionFallbackBuffer__Class>(type_info, "System.Text", "DecoderExceptionFallbackBuffer");
        }
        inline app::DecoderExceptionFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderExceptionFallbackBuffer>(get_class());
        }
    } // namespace DecoderExceptionFallbackBuffer
} // namespace app::classes::types
