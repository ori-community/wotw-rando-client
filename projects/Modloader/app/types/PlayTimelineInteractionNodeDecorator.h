#pragma once
#include <Modloader/app/structs/PlayTimelineInteractionNodeDecorator.h>
#include <Modloader/app/structs/PlayTimelineInteractionNodeDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayTimelineInteractionNodeDecorator {
        inline app::PlayTimelineInteractionNodeDecorator__Class** type_info() {
            static app::PlayTimelineInteractionNodeDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayTimelineInteractionNodeDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayTimelineInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::PlayTimelineInteractionNodeDecorator__Class>(type_info(), "Moon.InteractionGraph", "PlayTimelineInteractionNodeDecorator");
        }
        inline app::PlayTimelineInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::PlayTimelineInteractionNodeDecorator>(get_class());
        }
    } // namespace PlayTimelineInteractionNodeDecorator
} // namespace app::classes::types
