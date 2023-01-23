#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlaymodeEnteredEvent__Class.h>
#include <Modloader/app/structs/PlaymodeEnteredEvent.h>

namespace app::classes::types {
    namespace PlaymodeEnteredEvent {
        namespace {
            inline app::PlaymodeEnteredEvent__Class* type_info_ref = nullptr;
        }
        inline app::PlaymodeEnteredEvent__Class** type_info = &type_info_ref;
        inline app::PlaymodeEnteredEvent__Class* get_class() {
            return il2cpp::get_class<app::PlaymodeEnteredEvent__Class>(type_info, "", "PlaymodeEnteredEvent");
        }
        inline app::PlaymodeEnteredEvent* create() {
            return il2cpp::create_object<app::PlaymodeEnteredEvent>(get_class());
        }
    } // namespace PlaymodeEnteredEvent
} // namespace app::classes::types
