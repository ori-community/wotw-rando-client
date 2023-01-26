#pragma once
#include <Modloader/app/structs/ShaderID_CC_BleachBypass.h>
#include <Modloader/app/structs/ShaderID_CC_BleachBypass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_BleachBypass {
        inline app::ShaderID_CC_BleachBypass__Class** type_info() {
            static app::ShaderID_CC_BleachBypass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x0473C378));
            }
            return cache;
        }
        inline app::ShaderID_CC_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_BleachBypass__Class>(type_info(), "", "ShaderID_CC_BleachBypass");
        }
        inline app::ShaderID_CC_BleachBypass* create() {
            return il2cpp::create_object<app::ShaderID_CC_BleachBypass>(get_class());
        }
    } // namespace ShaderID_CC_BleachBypass
} // namespace app::classes::types
