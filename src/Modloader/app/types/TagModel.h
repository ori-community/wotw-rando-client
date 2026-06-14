#pragma once
#include <Modloader/app/structs/TagModel.h>
#include <Modloader/app/structs/TagModel__Array.h>
#include <Modloader/app/structs/TagModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TagModel {
        inline app::TagModel__Class** type_info() {
            static app::TagModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TagModel__Class**)(modloader::win::memory::resolve_rva(0x047504D8));
            }
            return cache;
        }
        inline app::TagModel__Class* get_class() {
            return il2cpp::get_class<app::TagModel__Class>(type_info(), "PlayFab.ClientModels", "TagModel");
        }
        inline app::TagModel* create() {
            return il2cpp::create_object<app::TagModel>(get_class());
        }
        inline app::TagModel__Array* create_array(int size) {
            return il2cpp::array_new<app::TagModel__Array>(get_class(), size);
        }
        inline app::TagModel__Array* create_array(const std::vector<app::TagModel*>& items) {
            return il2cpp::array_new<app::TagModel__Array>(get_class(), items);
        }
    } // namespace TagModel
} // namespace app::classes::types
