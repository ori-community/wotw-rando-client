#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderRuntimeAnchoredTexture {
        namespace {
            inline app::UberShaderRuntimeAnchoredTexture__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderRuntimeAnchoredTexture__Class** type_info = &type_info_ref;
        inline app::UberShaderRuntimeAnchoredTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeAnchoredTexture__Class>(type_info, "", "UberShaderRuntimeAnchoredTexture");
        }
        inline app::UberShaderRuntimeAnchoredTexture* create() {
            return il2cpp::create_object<app::UberShaderRuntimeAnchoredTexture>(get_class());
        }
        inline app::UberShaderRuntimeAnchoredTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderRuntimeAnchoredTexture__Array>(get_class(), size);
        }
        inline app::UberShaderRuntimeAnchoredTexture__Array* create_array(const std::vector<app::UberShaderRuntimeAnchoredTexture*>& items) {
            return il2cpp::array_new<app::UberShaderRuntimeAnchoredTexture__Array>(get_class(), items);
        }
    } // namespace UberShaderRuntimeAnchoredTexture
} // namespace app::classes::types
