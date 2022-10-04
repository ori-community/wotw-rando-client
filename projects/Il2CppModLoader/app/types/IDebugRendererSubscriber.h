#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugRendererSubscriber {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDebugRendererSubscriber__Class** type_info;
        inline app::IDebugRendererSubscriber__Class* get_class() {
            return il2cpp::get_class<app::IDebugRendererSubscriber__Class>(type_info, "Moon.VisualDebug", "IDebugRendererSubscriber");
        }
        inline app::IDebugRendererSubscriber* create() {
            return il2cpp::create_object<app::IDebugRendererSubscriber>(get_class());
        }
        inline app::IDebugRendererSubscriber__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugRendererSubscriber__Array>(get_class(), size);
        }
    } // namespace IDebugRendererSubscriber
} // namespace app::classes::types
