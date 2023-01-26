#pragma once
#include <Modloader/app/structs/StatisticNameVersion.h>
#include <Modloader/app/structs/StatisticNameVersion__Array.h>
#include <Modloader/app/structs/StatisticNameVersion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticNameVersion {
        inline app::StatisticNameVersion__Class** type_info() {
            static app::StatisticNameVersion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatisticNameVersion__Class**)(modloader::win::memory::resolve_rva(0x04703B00));
            }
            return cache;
        }
        inline app::StatisticNameVersion__Class* get_class() {
            return il2cpp::get_class<app::StatisticNameVersion__Class>(type_info(), "PlayFab.ClientModels", "StatisticNameVersion");
        }
        inline app::StatisticNameVersion* create() {
            return il2cpp::create_object<app::StatisticNameVersion>(get_class());
        }
        inline app::StatisticNameVersion__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticNameVersion__Array>(get_class(), size);
        }
        inline app::StatisticNameVersion__Array* create_array(const std::vector<app::StatisticNameVersion*>& items) {
            return il2cpp::array_new<app::StatisticNameVersion__Array>(get_class(), items);
        }
    } // namespace StatisticNameVersion
} // namespace app::classes::types
