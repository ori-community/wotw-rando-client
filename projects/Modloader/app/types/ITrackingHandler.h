#pragma once
#include <Modloader/app/structs/ITrackingHandler.h>
#include <Modloader/app/structs/ITrackingHandler__Array.h>
#include <Modloader/app/structs/ITrackingHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrackingHandler {
        inline app::ITrackingHandler__Class** type_info() {
            static app::ITrackingHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITrackingHandler__Class**)(modloader::win::memory::resolve_rva(0x0475D7C0));
            }
            return cache;
        }
        inline app::ITrackingHandler__Class* get_class() {
            return il2cpp::get_class<app::ITrackingHandler__Class>(type_info(), "System.Runtime.Remoting.Services", "ITrackingHandler");
        }
        inline app::ITrackingHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::ITrackingHandler__Array>(get_class(), size);
        }
        inline app::ITrackingHandler__Array* create_array(const std::vector<app::ITrackingHandler*>& items) {
            return il2cpp::array_new<app::ITrackingHandler__Array>(get_class(), items);
        }
    } // namespace ITrackingHandler
} // namespace app::classes::types
