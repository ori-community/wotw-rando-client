#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TagModel {
        inline app::TagModel__Class** type_info = (app::TagModel__Class**)(modloader::win::memory::resolve_rva(0x047504D8));
        inline app::TagModel__Class* get_class() {
            return il2cpp::get_class<app::TagModel__Class>(type_info, "PlayFab.ClientModels", "TagModel");
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
