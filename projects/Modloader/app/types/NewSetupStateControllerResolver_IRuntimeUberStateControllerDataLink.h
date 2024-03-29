#pragma once
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink {
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class** type_info() {
            static app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class**)(modloader::win::memory::resolve_rva(0x0477C600));
            }
            return cache;
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class>(type_info(), "Moon", "NewSetupStateControllerResolver", "IRuntimeUberStateControllerDataLink");
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create_array(int size) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class(), size);
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create_array(const std::vector<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink*>& items) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class(), items);
        }
    } // namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink
} // namespace app::classes::types
