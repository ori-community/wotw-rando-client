#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderTexture {
        inline app::UberShaderTexture__Class** type_info = (app::UberShaderTexture__Class**)(modloader::win::memory::resolve_rva(0x04737FE0));
        inline app::UberShaderTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTexture__Class>(type_info, "", "UberShaderTexture");
        }
        inline app::UberShaderTexture* create() {
            return il2cpp::create_object<app::UberShaderTexture>(get_class());
        }
        inline app::UberShaderTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderTexture__Array>(get_class(), size);
        }
        inline app::UberShaderTexture__Array* create_array(const std::vector<app::UberShaderTexture*>& items) {
            return il2cpp::array_new<app::UberShaderTexture__Array>(get_class(), items);
        }
    } // namespace UberShaderTexture
} // namespace app::classes::types
