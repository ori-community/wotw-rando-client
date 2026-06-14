#pragma once
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter.h>
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaFormatConverter {
        inline app::AVProWindowsMediaFormatConverter__Class** type_info() {
            static app::AVProWindowsMediaFormatConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AVProWindowsMediaFormatConverter__Class**)(modloader::win::memory::resolve_rva(0x04798D00));
            }
            return cache;
        }
        inline app::AVProWindowsMediaFormatConverter__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaFormatConverter__Class>(type_info(), "", "AVProWindowsMediaFormatConverter");
        }
        inline app::AVProWindowsMediaFormatConverter* create() {
            return il2cpp::create_object<app::AVProWindowsMediaFormatConverter>(get_class());
        }
    } // namespace AVProWindowsMediaFormatConverter
} // namespace app::classes::types
