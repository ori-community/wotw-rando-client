#pragma once
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array {
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class** type_info() {
            static app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class>(type_info(), "Moon", "NewSetupStateControllerResolver+SerializedUberStateControllerLinkItem[]");
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array
} // namespace app::classes::types
