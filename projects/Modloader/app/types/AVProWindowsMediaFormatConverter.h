#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter.h>

namespace app::classes::types {
    namespace AVProWindowsMediaFormatConverter {
        inline app::AVProWindowsMediaFormatConverter__Class** type_info = (app::AVProWindowsMediaFormatConverter__Class**)(modloader::win::memory::resolve_rva(0x04798D00));
        inline app::AVProWindowsMediaFormatConverter__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaFormatConverter__Class>(type_info, "", "AVProWindowsMediaFormatConverter");
        }
        inline app::AVProWindowsMediaFormatConverter* create() {
            return il2cpp::create_object<app::AVProWindowsMediaFormatConverter>(get_class());
        }
    } // namespace AVProWindowsMediaFormatConverter
} // namespace app::classes::types
