#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTarget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTarget__Class** type_info;
        inline app::RenderTarget__Class* get_class() {
            return il2cpp::get_class<app::RenderTarget__Class>(type_info, "Moon.Rendering", "RenderTarget");
        }
        inline app::RenderTarget* create() {
            return il2cpp::create_object<app::RenderTarget>(get_class());
        }
        inline app::RenderTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTarget__Array>(get_class(), size);
        }
        inline app::RenderTarget__Array* create_array(const std::vector<app::RenderTarget*>& items) {
            return il2cpp::array_new<app::RenderTarget__Array>(get_class(), items);
        }
    } // namespace RenderTarget
} // namespace app::classes::types
