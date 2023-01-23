#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreUpdate_IMGUISendQueuedEvents__Class.h>
#include <Modloader/app/structs/PreUpdate_IMGUISendQueuedEvents.h>
#include <Modloader/app/structs/PreUpdate_IMGUISendQueuedEvents__Boxed.h>

namespace app::classes::types {
    namespace PreUpdate_IMGUISendQueuedEvents {
        namespace {
            inline app::PreUpdate_IMGUISendQueuedEvents__Class* type_info_ref = nullptr;
        }
        inline app::PreUpdate_IMGUISendQueuedEvents__Class** type_info = &type_info_ref;
        inline app::PreUpdate_IMGUISendQueuedEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_IMGUISendQueuedEvents__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "IMGUISendQueuedEvents");
        }
        inline app::PreUpdate_IMGUISendQueuedEvents* create() {
            return il2cpp::create_object<app::PreUpdate_IMGUISendQueuedEvents>(get_class());
        }
        inline app::PreUpdate_IMGUISendQueuedEvents__Boxed* box(app::PreUpdate_IMGUISendQueuedEvents value) {
            return il2cpp::box_value<app::PreUpdate_IMGUISendQueuedEvents__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_IMGUISendQueuedEvents
} // namespace app::classes::types
