#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContinuousEvent__Class.h>
#include <Modloader/app/structs/ContinuousEvent.h>

namespace app::classes::types {
    namespace ContinuousEvent {
        namespace {
            inline app::ContinuousEvent__Class* type_info_ref = nullptr;
        }
        inline app::ContinuousEvent__Class** type_info = &type_info_ref;
        inline app::ContinuousEvent__Class* get_class() {
            return il2cpp::get_class<app::ContinuousEvent__Class>(type_info, "UnityEngine.Analytics", "ContinuousEvent");
        }
        inline app::ContinuousEvent* create() {
            return il2cpp::create_object<app::ContinuousEvent>(get_class());
        }
    } // namespace ContinuousEvent
} // namespace app::classes::types
