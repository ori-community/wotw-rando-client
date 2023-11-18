#pragma once
#include <Modloader/app/structs/StatisticianIdle.h>
#include <Modloader/app/structs/StatisticianIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticianIdle {
        inline app::StatisticianIdle__Class** type_info() {
            static app::StatisticianIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticianIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticianIdle__Class* get_class() {
            return il2cpp::get_class<app::StatisticianIdle__Class>(type_info(), "", "StatisticianIdle");
        }
        inline app::StatisticianIdle* create() {
            return il2cpp::create_object<app::StatisticianIdle>(get_class());
        }
    } // namespace StatisticianIdle
} // namespace app::classes::types
