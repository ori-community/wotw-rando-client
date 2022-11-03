#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastEncoderWindow {
        inline app::FastEncoderWindow__Class** type_info = (app::FastEncoderWindow__Class**)(modloader::win::memory::resolve_rva(0x0476A5D0));
        inline app::FastEncoderWindow__Class* get_class() {
            return il2cpp::get_class<app::FastEncoderWindow__Class>(type_info, "Unity.IO.Compression", "FastEncoderWindow");
        }
        inline app::FastEncoderWindow* create() {
            return il2cpp::create_object<app::FastEncoderWindow>(get_class());
        }
    } // namespace FastEncoderWindow
} // namespace app::classes::types
