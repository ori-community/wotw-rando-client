#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecoderExceptionFallback__Class.h>
#include <Modloader/app/structs/DecoderExceptionFallback.h>

namespace app::classes::types {
    namespace DecoderExceptionFallback {
        inline app::DecoderExceptionFallback__Class** type_info = (app::DecoderExceptionFallback__Class**)(modloader::win::memory::resolve_rva(0x047538F0));
        inline app::DecoderExceptionFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderExceptionFallback__Class>(type_info, "System.Text", "DecoderExceptionFallback");
        }
        inline app::DecoderExceptionFallback* create() {
            return il2cpp::create_object<app::DecoderExceptionFallback>(get_class());
        }
    } // namespace DecoderExceptionFallback
} // namespace app::classes::types
