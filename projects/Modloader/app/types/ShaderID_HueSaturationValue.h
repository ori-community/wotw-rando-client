#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_HueSaturationValue__Class.h>
#include <Modloader/app/structs/ShaderID_HueSaturationValue.h>

namespace app::classes::types {
    namespace ShaderID_HueSaturationValue {
        inline app::ShaderID_HueSaturationValue__Class** type_info = (app::ShaderID_HueSaturationValue__Class**)(modloader::win::memory::resolve_rva(0x04713860));
        inline app::ShaderID_HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HueSaturationValue__Class>(type_info, "Colorful", "ShaderID_HueSaturationValue");
        }
        inline app::ShaderID_HueSaturationValue* create() {
            return il2cpp::create_object<app::ShaderID_HueSaturationValue>(get_class());
        }
    } // namespace ShaderID_HueSaturationValue
} // namespace app::classes::types
