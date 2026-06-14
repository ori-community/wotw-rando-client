#pragma once
#include <Modloader/app/structs/StatisticianPlaceholder.h>
#include <Modloader/app/structs/StatisticianPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticianPlaceholder {
        inline app::StatisticianPlaceholder__Class** type_info() {
            static app::StatisticianPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticianPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticianPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::StatisticianPlaceholder__Class>(type_info(), "", "StatisticianPlaceholder");
        }
        inline app::StatisticianPlaceholder* create() {
            return il2cpp::create_object<app::StatisticianPlaceholder>(get_class());
        }
    } // namespace StatisticianPlaceholder
} // namespace app::classes::types
