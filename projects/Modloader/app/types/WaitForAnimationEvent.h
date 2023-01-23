#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitForAnimationEvent__Class.h>
#include <Modloader/app/structs/WaitForAnimationEvent.h>

namespace app::classes::types {
    namespace WaitForAnimationEvent {
        namespace {
            inline app::WaitForAnimationEvent__Class* type_info_ref = nullptr;
        }
        inline app::WaitForAnimationEvent__Class** type_info = &type_info_ref;
        inline app::WaitForAnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::WaitForAnimationEvent__Class>(type_info, "", "WaitForAnimationEvent");
        }
        inline app::WaitForAnimationEvent* create() {
            return il2cpp::create_object<app::WaitForAnimationEvent>(get_class());
        }
    } // namespace WaitForAnimationEvent
} // namespace app::classes::types
