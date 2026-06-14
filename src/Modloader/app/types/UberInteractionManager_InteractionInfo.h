#pragma once
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo__Array.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo__Boxed.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionInfo {
        inline app::UberInteractionManager_InteractionInfo__Class** type_info() {
            static app::UberInteractionManager_InteractionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionManager_InteractionInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionManager_InteractionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_InteractionInfo__Class>(type_info(), "", "UberInteractionManager", "InteractionInfo");
        }
        inline app::UberInteractionManager_InteractionInfo* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionInfo>(get_class());
        }
        inline app::UberInteractionManager_InteractionInfo__Boxed* box(app::UberInteractionManager_InteractionInfo value) {
            return il2cpp::box_value<app::UberInteractionManager_InteractionInfo__Boxed>(get_class(), value);
        }
        inline app::UberInteractionManager_InteractionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManager_InteractionInfo__Array>(get_class(), size);
        }
        inline app::UberInteractionManager_InteractionInfo__Array* create_array(const std::vector<app::UberInteractionManager_InteractionInfo>& items) {
            return il2cpp::array_new<app::UberInteractionManager_InteractionInfo__Array>(get_class(), items);
        }
    } // namespace UberInteractionManager_InteractionInfo
} // namespace app::classes::types
