#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Ambience_AmbienceTrack__Array__Class.h>
#include <Modloader/app/structs/Ambience_AmbienceTrack__Array.h>

namespace app::classes::types {
    namespace Ambience_AmbienceTrack__Array {
        namespace {
            inline app::Ambience_AmbienceTrack__Array__Class* type_info_ref = nullptr;
        }
        inline app::Ambience_AmbienceTrack__Array__Class** type_info = &type_info_ref;
        inline app::Ambience_AmbienceTrack__Array__Class* get_class() {
            return il2cpp::get_class<app::Ambience_AmbienceTrack__Array__Class>(type_info, "Core", "Ambience+AmbienceTrack[]");
        }
        inline app::Ambience_AmbienceTrack__Array* create() {
            return il2cpp::create_object<app::Ambience_AmbienceTrack__Array>(get_class());
        }
    } // namespace Ambience_AmbienceTrack__Array
} // namespace app::classes::types
