#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeAnchoredTexture {
        namespace {
            app::UberShaderRuntimeAnchoredTexture__Class* type_info_ref = nullptr;
        }
        app::UberShaderRuntimeAnchoredTexture__Class** type_info = &type_info_ref;
        inline app::UberShaderRuntimeAnchoredTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeAnchoredTexture__Class>(type_info, "", "UberShaderRuntimeAnchoredTexture");
        }
        inline app::UberShaderRuntimeAnchoredTexture* create() {
            return il2cpp::create_object<app::UberShaderRuntimeAnchoredTexture>(get_class());
        }
        inline app::UberShaderRuntimeAnchoredTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderRuntimeAnchoredTexture__Array>(get_class(), size);
        }
    } // namespace UberShaderRuntimeAnchoredTexture
} // namespace app::classes::types
