#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDebugRendererSubscriber {
        inline app::IDebugRendererSubscriber__Class** type_info = (app::IDebugRendererSubscriber__Class**)(modloader::win::memory::resolve_rva(0x047454F8));
        inline app::IDebugRendererSubscriber__Class* get_class() {
            return il2cpp::get_class<app::IDebugRendererSubscriber__Class>(type_info, "Moon.VisualDebug", "IDebugRendererSubscriber");
        }
        inline app::IDebugRendererSubscriber__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugRendererSubscriber__Array>(get_class(), size);
        }
        inline app::IDebugRendererSubscriber__Array* create_array(const std::vector<app::IDebugRendererSubscriber*>& items) {
            return il2cpp::array_new<app::IDebugRendererSubscriber__Array>(get_class(), items);
        }
    } // namespace IDebugRendererSubscriber
} // namespace app::classes::types
