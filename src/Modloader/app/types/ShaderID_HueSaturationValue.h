#pragma once
#include <Modloader/app/structs/ShaderID_HueSaturationValue.h>
#include <Modloader/app/structs/ShaderID_HueSaturationValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_HueSaturationValue {
        inline app::ShaderID_HueSaturationValue__Class** type_info() {
            static app::ShaderID_HueSaturationValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_HueSaturationValue__Class**)(modloader::win::memory::resolve_rva(0x04713860));
            }
            return cache;
        }
        inline app::ShaderID_HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HueSaturationValue__Class>(type_info(), "Colorful", "ShaderID_HueSaturationValue");
        }
        inline app::ShaderID_HueSaturationValue* create() {
            return il2cpp::create_object<app::ShaderID_HueSaturationValue>(get_class());
        }
    } // namespace ShaderID_HueSaturationValue
} // namespace app::classes::types
