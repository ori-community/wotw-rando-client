#pragma once
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger.h>
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger__Array.h>
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger__Boxed.h>
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineManager_AddTimeTrigger {
        inline app::ChallengeShrineManager_AddTimeTrigger__Class** type_info() {
            static app::ChallengeShrineManager_AddTimeTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineManager_AddTimeTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineManager_AddTimeTrigger__Class>(type_info(), "", "ChallengeShrineManager", "AddTimeTrigger");
        }
        inline app::ChallengeShrineManager_AddTimeTrigger* create() {
            return il2cpp::create_object<app::ChallengeShrineManager_AddTimeTrigger>(get_class());
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Boxed* box(app::ChallengeShrineManager_AddTimeTrigger value) {
            return il2cpp::box_value<app::ChallengeShrineManager_AddTimeTrigger__Boxed>(get_class(), value);
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Array* create_array(int size) {
            return il2cpp::array_new<app::ChallengeShrineManager_AddTimeTrigger__Array>(get_class(), size);
        }
        inline app::ChallengeShrineManager_AddTimeTrigger__Array* create_array(const std::vector<app::ChallengeShrineManager_AddTimeTrigger>& items) {
            return il2cpp::array_new<app::ChallengeShrineManager_AddTimeTrigger__Array>(get_class(), items);
        }
    } // namespace ChallengeShrineManager_AddTimeTrigger
} // namespace app::classes::types
