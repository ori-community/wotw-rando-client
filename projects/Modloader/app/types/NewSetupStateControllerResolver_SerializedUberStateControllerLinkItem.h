#pragma once
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Boxed.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem {
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class** type_info() {
            static app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class**)(modloader::win::memory::resolve_rva(0x04773638));
            }
            return cache;
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class>(type_info(), "Moon", "NewSetupStateControllerResolver", "SerializedUberStateControllerLinkItem");
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem>(get_class());
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Boxed* box(app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem value) {
            return il2cpp::box_value<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Boxed>(get_class(), value);
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* create_array(int size) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array>(get_class(), size);
        }
        inline app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array* create_array(const std::vector<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem>& items) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array>(get_class(), items);
        }
    } // namespace NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem
} // namespace app::classes::types
