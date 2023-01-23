#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayTimelineInteractionNodeDecorator__Class.h>
#include <Modloader/app/structs/PlayTimelineInteractionNodeDecorator.h>

namespace app::classes::types {
    namespace PlayTimelineInteractionNodeDecorator {
        namespace {
            inline app::PlayTimelineInteractionNodeDecorator__Class* type_info_ref = nullptr;
        }
        inline app::PlayTimelineInteractionNodeDecorator__Class** type_info = &type_info_ref;
        inline app::PlayTimelineInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::PlayTimelineInteractionNodeDecorator__Class>(type_info, "Moon.InteractionGraph", "PlayTimelineInteractionNodeDecorator");
        }
        inline app::PlayTimelineInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::PlayTimelineInteractionNodeDecorator>(get_class());
        }
    } // namespace PlayTimelineInteractionNodeDecorator
} // namespace app::classes::types
