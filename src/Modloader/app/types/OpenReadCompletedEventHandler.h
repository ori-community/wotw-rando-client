#pragma once
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#include <Modloader/app/structs/OpenReadCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenReadCompletedEventHandler {
        inline app::OpenReadCompletedEventHandler__Class** type_info() {
            static app::OpenReadCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenReadCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471B8A0));
            }
            return cache;
        }
        inline app::OpenReadCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::OpenReadCompletedEventHandler__Class>(type_info(), "System.Net", "OpenReadCompletedEventHandler");
        }
        inline app::OpenReadCompletedEventHandler* create() {
            return il2cpp::create_object<app::OpenReadCompletedEventHandler>(get_class());
        }
    } // namespace OpenReadCompletedEventHandler
} // namespace app::classes::types
