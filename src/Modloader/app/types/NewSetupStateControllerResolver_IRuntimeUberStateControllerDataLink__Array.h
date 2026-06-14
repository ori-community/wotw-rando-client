#pragma once
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array {
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class** type_info() {
            static app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class>(type_info(), "Moon", "NewSetupStateControllerResolver+IRuntimeUberStateControllerDataLink[]");
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array
} // namespace app::classes::types
