#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenarioRecorderTracker__Class.h>
#include <Modloader/app/structs/ScenarioRecorderTracker.h>

namespace app::classes::types {
    namespace ScenarioRecorderTracker {
        inline app::ScenarioRecorderTracker__Class** type_info = (app::ScenarioRecorderTracker__Class**)(modloader::win::memory::resolve_rva(0x04789CC0));
        inline app::ScenarioRecorderTracker__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRecorderTracker__Class>(type_info, "", "ScenarioRecorderTracker");
        }
        inline app::ScenarioRecorderTracker* create() {
            return il2cpp::create_object<app::ScenarioRecorderTracker>(get_class());
        }
    } // namespace ScenarioRecorderTracker
} // namespace app::classes::types
