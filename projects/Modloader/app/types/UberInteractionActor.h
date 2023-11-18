#pragma once
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/UberInteractionActor__Array.h>
#include <Modloader/app/structs/UberInteractionActor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionActor {
        inline app::UberInteractionActor__Class** type_info() {
            static app::UberInteractionActor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionActor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionActor__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionActor__Class>(type_info(), "", "UberInteractionActor");
        }
        inline app::UberInteractionActor* create() {
            return il2cpp::create_object<app::UberInteractionActor>(get_class());
        }
        inline app::UberInteractionActor__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionActor__Array>(get_class(), size);
        }
        inline app::UberInteractionActor__Array* create_array(const std::vector<app::UberInteractionActor*>& items) {
            return il2cpp::array_new<app::UberInteractionActor__Array>(get_class(), items);
        }
    } // namespace UberInteractionActor
} // namespace app::classes::types
