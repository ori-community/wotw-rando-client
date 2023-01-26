#pragma once
#include <Modloader/app/structs/ActiveQuestDistanceFloatProvider.h>
#include <Modloader/app/structs/ActiveQuestDistanceFloatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActiveQuestDistanceFloatProvider {
        inline app::ActiveQuestDistanceFloatProvider__Class** type_info() {
            static app::ActiveQuestDistanceFloatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActiveQuestDistanceFloatProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActiveQuestDistanceFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::ActiveQuestDistanceFloatProvider__Class>(type_info(), "", "ActiveQuestDistanceFloatProvider");
        }
        inline app::ActiveQuestDistanceFloatProvider* create() {
            return il2cpp::create_object<app::ActiveQuestDistanceFloatProvider>(get_class());
        }
    } // namespace ActiveQuestDistanceFloatProvider
} // namespace app::classes::types
