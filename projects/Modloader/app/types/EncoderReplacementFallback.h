#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EncoderReplacementFallback__Class.h>
#include <Modloader/app/structs/EncoderReplacementFallback.h>

namespace app::classes::types {
    namespace EncoderReplacementFallback {
        inline app::EncoderReplacementFallback__Class** type_info = (app::EncoderReplacementFallback__Class**)(modloader::win::memory::resolve_rva(0x04774708));
        inline app::EncoderReplacementFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderReplacementFallback__Class>(type_info, "System.Text", "EncoderReplacementFallback");
        }
        inline app::EncoderReplacementFallback* create() {
            return il2cpp::create_object<app::EncoderReplacementFallback>(get_class());
        }
    } // namespace EncoderReplacementFallback
} // namespace app::classes::types
