#pragma once
#include <Modloader/app/structs/MainThreadDispatcherPlaymode.h>
#include <Modloader/app/structs/MainThreadDispatcherPlaymode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainThreadDispatcherPlaymode {
        inline app::MainThreadDispatcherPlaymode__Class** type_info() {
            static app::MainThreadDispatcherPlaymode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MainThreadDispatcherPlaymode__Class**)(modloader::win::memory::resolve_rva(0x047717E8));
            }
            return cache;
        }
        inline app::MainThreadDispatcherPlaymode__Class* get_class() {
            return il2cpp::get_class<app::MainThreadDispatcherPlaymode__Class>(type_info(), "Moon.Network.Web", "MainThreadDispatcherPlaymode");
        }
        inline app::MainThreadDispatcherPlaymode* create() {
            return il2cpp::create_object<app::MainThreadDispatcherPlaymode>(get_class());
        }
    } // namespace MainThreadDispatcherPlaymode
} // namespace app::classes::types
