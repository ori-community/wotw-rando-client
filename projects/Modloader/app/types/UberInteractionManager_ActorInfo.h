#pragma once
#include <Modloader/app/structs/UberInteractionManager_ActorInfo.h>
#include <Modloader/app/structs/UberInteractionManager_ActorInfo__Array.h>
#include <Modloader/app/structs/UberInteractionManager_ActorInfo__Boxed.h>
#include <Modloader/app/structs/UberInteractionManager_ActorInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ActorInfo {
        inline app::UberInteractionManager_ActorInfo__Class** type_info() {
            static app::UberInteractionManager_ActorInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_ActorInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C238));
            }
            return cache;
        }
        inline app::UberInteractionManager_ActorInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ActorInfo__Class>(type_info(), "", "UberInteractionManager", "ActorInfo");
        }
        inline app::UberInteractionManager_ActorInfo* create() {
            return il2cpp::create_object<app::UberInteractionManager_ActorInfo>(get_class());
        }
        inline app::UberInteractionManager_ActorInfo__Boxed* box(app::UberInteractionManager_ActorInfo value) {
            return il2cpp::box_value<app::UberInteractionManager_ActorInfo__Boxed>(get_class(), value);
        }
        inline app::UberInteractionManager_ActorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManager_ActorInfo__Array>(get_class(), size);
        }
        inline app::UberInteractionManager_ActorInfo__Array* create_array(const std::vector<app::UberInteractionManager_ActorInfo>& items) {
            return il2cpp::array_new<app::UberInteractionManager_ActorInfo__Array>(get_class(), items);
        }
    } // namespace UberInteractionManager_ActorInfo
} // namespace app::classes::types
