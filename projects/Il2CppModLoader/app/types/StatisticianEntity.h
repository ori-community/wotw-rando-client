#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticianEntity {
        namespace {
            app::StatisticianEntity__Class* type_info_ref = nullptr;
        }
        app::StatisticianEntity__Class** type_info = &type_info_ref;
        inline app::StatisticianEntity__Class* get_class() {
            return il2cpp::get_class<app::StatisticianEntity__Class>(type_info, "", "StatisticianEntity");
        }
        inline app::StatisticianEntity* create() {
            return il2cpp::create_object<app::StatisticianEntity>(get_class());
        }
    } // namespace StatisticianEntity
} // namespace app::classes::types
