#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEventsDebugger__Class.h>
#include <Modloader/app/structs/SeinEventsDebugger.h>

namespace app::classes::types {
    namespace SeinEventsDebugger {
        namespace {
            inline app::SeinEventsDebugger__Class* type_info_ref = nullptr;
        }
        inline app::SeinEventsDebugger__Class** type_info = &type_info_ref;
        inline app::SeinEventsDebugger__Class* get_class() {
            return il2cpp::get_class<app::SeinEventsDebugger__Class>(type_info, "", "SeinEventsDebugger");
        }
        inline app::SeinEventsDebugger* create() {
            return il2cpp::create_object<app::SeinEventsDebugger>(get_class());
        }
    } // namespace SeinEventsDebugger
} // namespace app::classes::types
