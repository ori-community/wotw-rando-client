#pragma once
#include <Modloader/app/structs/StatisticValue.h>
#include <Modloader/app/structs/StatisticValue__Array.h>
#include <Modloader/app/structs/StatisticValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticValue {
        inline app::StatisticValue__Class** type_info() {
            static app::StatisticValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatisticValue__Class**)(modloader::win::memory::resolve_rva(0x04729A68));
            }
            return cache;
        }
        inline app::StatisticValue__Class* get_class() {
            return il2cpp::get_class<app::StatisticValue__Class>(type_info(), "PlayFab.ClientModels", "StatisticValue");
        }
        inline app::StatisticValue* create() {
            return il2cpp::create_object<app::StatisticValue>(get_class());
        }
        inline app::StatisticValue__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticValue__Array>(get_class(), size);
        }
        inline app::StatisticValue__Array* create_array(const std::vector<app::StatisticValue*>& items) {
            return il2cpp::array_new<app::StatisticValue__Array>(get_class(), items);
        }
    } // namespace StatisticValue
} // namespace app::classes::types
