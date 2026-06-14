#pragma once
#include <Modloader/app/structs/ShaderID_BleachBypass.h>
#include <Modloader/app/structs/ShaderID_BleachBypass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BleachBypass {
        inline app::ShaderID_BleachBypass__Class** type_info() {
            static app::ShaderID_BleachBypass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x04746408));
            }
            return cache;
        }
        inline app::ShaderID_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BleachBypass__Class>(type_info(), "Colorful", "ShaderID_BleachBypass");
        }
        inline app::ShaderID_BleachBypass* create() {
            return il2cpp::create_object<app::ShaderID_BleachBypass>(get_class());
        }
    } // namespace ShaderID_BleachBypass
} // namespace app::classes::types
