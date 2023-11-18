#pragma once
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture.h>
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture__Array.h>
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeAnchoredTexture {
        inline app::UberShaderRuntimeAnchoredTexture__Class** type_info() {
            static app::UberShaderRuntimeAnchoredTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderRuntimeAnchoredTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderRuntimeAnchoredTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeAnchoredTexture__Class>(type_info(), "", "UberShaderRuntimeAnchoredTexture");
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
