#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReadyForAnimationTrigger__Class.h>
#include <Modloader/app/structs/ReadyForAnimationTrigger.h>

namespace app::classes::types {
    namespace ReadyForAnimationTrigger {
        namespace {
            inline app::ReadyForAnimationTrigger__Class* type_info_ref = nullptr;
        }
        inline app::ReadyForAnimationTrigger__Class** type_info = &type_info_ref;
        inline app::ReadyForAnimationTrigger__Class* get_class() {
            return il2cpp::get_class<app::ReadyForAnimationTrigger__Class>(type_info, "", "ReadyForAnimationTrigger");
        }
        inline app::ReadyForAnimationTrigger* create() {
            return il2cpp::create_object<app::ReadyForAnimationTrigger>(get_class());
        }
    } // namespace ReadyForAnimationTrigger
} // namespace app::classes::types
