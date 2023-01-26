#pragma once
#include <Modloader/app/structs/ShaderID_CC_HueSaturationValue.h>
#include <Modloader/app/structs/ShaderID_CC_HueSaturationValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_HueSaturationValue {
        inline app::ShaderID_CC_HueSaturationValue__Class** type_info() {
            static app::ShaderID_CC_HueSaturationValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_HueSaturationValue__Class**)(modloader::win::memory::resolve_rva(0x0472CD08));
            }
            return cache;
        }
        inline app::ShaderID_CC_HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_HueSaturationValue__Class>(type_info(), "", "ShaderID_CC_HueSaturationValue");
        }
        inline app::ShaderID_CC_HueSaturationValue* create() {
            return il2cpp::create_object<app::ShaderID_CC_HueSaturationValue>(get_class());
        }
    } // namespace ShaderID_CC_HueSaturationValue
} // namespace app::classes::types
