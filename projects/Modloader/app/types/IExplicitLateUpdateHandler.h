#pragma once
#include <Modloader/app/structs/IExplicitLateUpdateHandler.h>
#include <Modloader/app/structs/IExplicitLateUpdateHandler__Array.h>
#include <Modloader/app/structs/IExplicitLateUpdateHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitLateUpdateHandler {
        inline app::IExplicitLateUpdateHandler__Class** type_info() {
            static app::IExplicitLateUpdateHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IExplicitLateUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x047371A8));
            }
            return cache;
        }
        inline app::IExplicitLateUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitLateUpdateHandler__Class>(type_info(), "Moon", "IExplicitLateUpdateHandler");
        }
        inline app::IExplicitLateUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitLateUpdateHandler__Array>(get_class(), size);
        }
        inline app::IExplicitLateUpdateHandler__Array* create_array(const std::vector<app::IExplicitLateUpdateHandler*>& items) {
            return il2cpp::array_new<app::IExplicitLateUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IExplicitLateUpdateHandler
} // namespace app::classes::types
