#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InLoremasterReplayCondition__Class.h>
#include <Modloader/app/structs/InLoremasterReplayCondition.h>

namespace app::classes::types {
    namespace InLoremasterReplayCondition {
        namespace {
            inline app::InLoremasterReplayCondition__Class* type_info_ref = nullptr;
        }
        inline app::InLoremasterReplayCondition__Class** type_info = &type_info_ref;
        inline app::InLoremasterReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::InLoremasterReplayCondition__Class>(type_info, "", "InLoremasterReplayCondition");
        }
        inline app::InLoremasterReplayCondition* create() {
            return il2cpp::create_object<app::InLoremasterReplayCondition>(get_class());
        }
    } // namespace InLoremasterReplayCondition
} // namespace app::classes::types
