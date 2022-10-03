#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticianPlaceholder {
        namespace {
            app::StatisticianPlaceholder__Class* type_info_ref = nullptr;
        }
        app::StatisticianPlaceholder__Class** type_info = &type_info_ref;
        inline app::StatisticianPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::StatisticianPlaceholder__Class>(type_info, "", "StatisticianPlaceholder");
        }
        inline app::StatisticianPlaceholder* create() {
            return il2cpp::create_object<app::StatisticianPlaceholder>(get_class());
        }
    } // namespace StatisticianPlaceholder
} // namespace app::classes::types
