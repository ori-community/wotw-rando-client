#pragma once
#include <Modloader/app/structs/ShaderID_AVProWindowsMediaFormatConverter.h>
#include <Modloader/app/structs/ShaderID_AVProWindowsMediaFormatConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AVProWindowsMediaFormatConverter {
        inline app::ShaderID_AVProWindowsMediaFormatConverter__Class** type_info() {
            static app::ShaderID_AVProWindowsMediaFormatConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_AVProWindowsMediaFormatConverter__Class**)(modloader::win::memory::resolve_rva(0x047080B8));
            }
            return cache;
        }
        inline app::ShaderID_AVProWindowsMediaFormatConverter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AVProWindowsMediaFormatConverter__Class>(type_info(), "", "ShaderID_AVProWindowsMediaFormatConverter");
        }
        inline app::ShaderID_AVProWindowsMediaFormatConverter* create() {
            return il2cpp::create_object<app::ShaderID_AVProWindowsMediaFormatConverter>(get_class());
        }
    } // namespace ShaderID_AVProWindowsMediaFormatConverter
} // namespace app::classes::types
