#pragma once
#include <Modloader/app/structs/BuildRunningHook.h>
#include <Modloader/app/structs/BuildRunningHook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildRunningHook {
        inline app::BuildRunningHook__Class** type_info() {
            static app::BuildRunningHook__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuildRunningHook__Class**)(modloader::win::memory::resolve_rva(0x0474C960));
            }
            return cache;
        }
        inline app::BuildRunningHook__Class* get_class() {
            return il2cpp::get_class<app::BuildRunningHook__Class>(type_info(), "", "BuildRunningHook");
        }
        inline app::BuildRunningHook* create() {
            return il2cpp::create_object<app::BuildRunningHook>(get_class());
        }
    } // namespace BuildRunningHook
} // namespace app::classes::types
