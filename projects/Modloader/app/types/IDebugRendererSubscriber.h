#pragma once
#include <Modloader/app/structs/IDebugRendererSubscriber.h>
#include <Modloader/app/structs/IDebugRendererSubscriber__Array.h>
#include <Modloader/app/structs/IDebugRendererSubscriber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugRendererSubscriber {
        inline app::IDebugRendererSubscriber__Class** type_info() {
            static app::IDebugRendererSubscriber__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDebugRendererSubscriber__Class**)(modloader::win::memory::resolve_rva(0x047454F8));
            }
            return cache;
        }
        inline app::IDebugRendererSubscriber__Class* get_class() {
            return il2cpp::get_class<app::IDebugRendererSubscriber__Class>(type_info(), "Moon.VisualDebug", "IDebugRendererSubscriber");
        }
        inline app::IDebugRendererSubscriber__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugRendererSubscriber__Array>(get_class(), size);
        }
        inline app::IDebugRendererSubscriber__Array* create_array(const std::vector<app::IDebugRendererSubscriber*>& items) {
            return il2cpp::array_new<app::IDebugRendererSubscriber__Array>(get_class(), items);
        }
    } // namespace IDebugRendererSubscriber
} // namespace app::classes::types
