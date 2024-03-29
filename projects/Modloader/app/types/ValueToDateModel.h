#pragma once
#include <Modloader/app/structs/ValueToDateModel.h>
#include <Modloader/app/structs/ValueToDateModel__Array.h>
#include <Modloader/app/structs/ValueToDateModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueToDateModel {
        inline app::ValueToDateModel__Class** type_info() {
            static app::ValueToDateModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValueToDateModel__Class**)(modloader::win::memory::resolve_rva(0x047259B0));
            }
            return cache;
        }
        inline app::ValueToDateModel__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel__Class>(type_info(), "PlayFab.ClientModels", "ValueToDateModel");
        }
        inline app::ValueToDateModel* create() {
            return il2cpp::create_object<app::ValueToDateModel>(get_class());
        }
        inline app::ValueToDateModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ValueToDateModel__Array>(get_class(), size);
        }
        inline app::ValueToDateModel__Array* create_array(const std::vector<app::ValueToDateModel*>& items) {
            return il2cpp::array_new<app::ValueToDateModel__Array>(get_class(), items);
        }
    } // namespace ValueToDateModel
} // namespace app::classes::types
