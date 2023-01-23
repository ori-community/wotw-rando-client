#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReplayFastForwardSystem__Class.h>
#include <Modloader/app/structs/ReplayFastForwardSystem.h>

namespace app::classes::types {
    namespace ReplayFastForwardSystem {
        namespace {
            inline app::ReplayFastForwardSystem__Class* type_info_ref = nullptr;
        }
        inline app::ReplayFastForwardSystem__Class** type_info = &type_info_ref;
        inline app::ReplayFastForwardSystem__Class* get_class() {
            return il2cpp::get_class<app::ReplayFastForwardSystem__Class>(type_info, "Moon.Timeline.Systems", "ReplayFastForwardSystem");
        }
        inline app::ReplayFastForwardSystem* create() {
            return il2cpp::create_object<app::ReplayFastForwardSystem>(get_class());
        }
    } // namespace ReplayFastForwardSystem
} // namespace app::classes::types
