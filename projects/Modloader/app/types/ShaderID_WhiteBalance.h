#pragma once
#include <Modloader/app/structs/ShaderID_WhiteBalance.h>
#include <Modloader/app/structs/ShaderID_WhiteBalance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_WhiteBalance {
        inline app::ShaderID_WhiteBalance__Class** type_info() {
            static app::ShaderID_WhiteBalance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_WhiteBalance__Class**)(modloader::win::memory::resolve_rva(0x04778E48));
            }
            return cache;
        }
        inline app::ShaderID_WhiteBalance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_WhiteBalance__Class>(type_info(), "Colorful", "ShaderID_WhiteBalance");
        }
        inline app::ShaderID_WhiteBalance* create() {
            return il2cpp::create_object<app::ShaderID_WhiteBalance>(get_class());
        }
    } // namespace ShaderID_WhiteBalance
} // namespace app::classes::types
