#pragma once
#include <Modloader/app/structs/ReplayModel.h>
#include <Modloader/app/structs/ReplayModel__Array.h>
#include <Modloader/app/structs/ReplayModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayModel {
        inline app::ReplayModel__Class** type_info() {
            static app::ReplayModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayModel__Class**)(modloader::win::memory::resolve_rva(0x04759828));
            }
            return cache;
        }
        inline app::ReplayModel__Class* get_class() {
            return il2cpp::get_class<app::ReplayModel__Class>(type_info(), "", "ReplayModel");
        }
        inline app::ReplayModel* create() {
            return il2cpp::create_object<app::ReplayModel>(get_class());
        }
        inline app::ReplayModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplayModel__Array>(get_class(), size);
        }
        inline app::ReplayModel__Array* create_array(const std::vector<app::ReplayModel*>& items) {
            return il2cpp::array_new<app::ReplayModel__Array>(get_class(), items);
        }
    } // namespace ReplayModel
} // namespace app::classes::types
