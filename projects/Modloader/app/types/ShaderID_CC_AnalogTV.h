#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CC_AnalogTV__Class.h>
#include <Modloader/app/structs/ShaderID_CC_AnalogTV.h>

namespace app::classes::types {
    namespace ShaderID_CC_AnalogTV {
        inline app::ShaderID_CC_AnalogTV__Class** type_info = (app::ShaderID_CC_AnalogTV__Class**)(modloader::win::memory::resolve_rva(0x04757100));
        inline app::ShaderID_CC_AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_AnalogTV__Class>(type_info, "", "ShaderID_CC_AnalogTV");
        }
        inline app::ShaderID_CC_AnalogTV* create() {
            return il2cpp::create_object<app::ShaderID_CC_AnalogTV>(get_class());
        }
    } // namespace ShaderID_CC_AnalogTV
} // namespace app::classes::types
