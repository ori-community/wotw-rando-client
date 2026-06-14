#pragma once
#include <Modloader/app/structs/LocationModel.h>
#include <Modloader/app/structs/LocationModel__Array.h>
#include <Modloader/app/structs/LocationModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocationModel {
        inline app::LocationModel__Class** type_info() {
            static app::LocationModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocationModel__Class**)(modloader::win::memory::resolve_rva(0x04775068));
            }
            return cache;
        }
        inline app::LocationModel__Class* get_class() {
            return il2cpp::get_class<app::LocationModel__Class>(type_info(), "PlayFab.ClientModels", "LocationModel");
        }
        inline app::LocationModel* create() {
            return il2cpp::create_object<app::LocationModel>(get_class());
        }
        inline app::LocationModel__Array* create_array(int size) {
            return il2cpp::array_new<app::LocationModel__Array>(get_class(), size);
        }
        inline app::LocationModel__Array* create_array(const std::vector<app::LocationModel*>& items) {
            return il2cpp::array_new<app::LocationModel__Array>(get_class(), items);
        }
    } // namespace LocationModel
} // namespace app::classes::types
