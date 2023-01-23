#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger__Array__Class.h>
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger__Array.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_AddTimeTrigger__Array {
        namespace {
            inline app::ChallengeShrineManager_AddTimeTrigger__Array__Class* type_info_ref = nullptr;
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Array__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineManager_AddTimeTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineManager_AddTimeTrigger__Array__Class>(type_info, "", "ChallengeShrineManager+AddTimeTrigger[]");
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Array* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_AddTimeTrigger__Array>(get_class());
        }
    } // namespace ChallengeShrineManager_AddTimeTrigger__Array
} // namespace app::classes::types
