#pragma once
#include <Modloader/app/structs/StatisticianEntity.h>
#include <Modloader/app/structs/StatisticianEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticianEntity {
        inline app::StatisticianEntity__Class** type_info() {
            static app::StatisticianEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticianEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticianEntity__Class* get_class() {
            return il2cpp::get_class<app::StatisticianEntity__Class>(type_info(), "", "StatisticianEntity");
        }
        inline app::StatisticianEntity* create() {
            return il2cpp::create_object<app::StatisticianEntity>(get_class());
        }
    } // namespace StatisticianEntity
} // namespace app::classes::types
