#pragma once
#include <Modloader/app/structs/StatisticModel.h>
#include <Modloader/app/structs/StatisticModel__Array.h>
#include <Modloader/app/structs/StatisticModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticModel {
        inline app::StatisticModel__Class** type_info() {
            static app::StatisticModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatisticModel__Class**)(modloader::win::memory::resolve_rva(0x04746AC0));
            }
            return cache;
        }
        inline app::StatisticModel__Class* get_class() {
            return il2cpp::get_class<app::StatisticModel__Class>(type_info(), "PlayFab.ClientModels", "StatisticModel");
        }
        inline app::StatisticModel* create() {
            return il2cpp::create_object<app::StatisticModel>(get_class());
        }
        inline app::StatisticModel__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticModel__Array>(get_class(), size);
        }
        inline app::StatisticModel__Array* create_array(const std::vector<app::StatisticModel*>& items) {
            return il2cpp::array_new<app::StatisticModel__Array>(get_class(), items);
        }
    } // namespace StatisticModel
} // namespace app::classes::types
