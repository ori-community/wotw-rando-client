#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupBlock {
        namespace {
            inline app::GroupBlock__Class* type_info_ref = nullptr;
        }
        inline app::GroupBlock__Class** type_info = &type_info_ref;
        inline app::GroupBlock__Class* get_class() {
            return il2cpp::get_class<app::GroupBlock__Class>(type_info, "PlayFab.GroupsModels", "GroupBlock");
        }
        inline app::GroupBlock* create() {
            return il2cpp::create_object<app::GroupBlock>(get_class());
        }
        inline app::GroupBlock__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupBlock__Array>(get_class(), size);
        }
        inline app::GroupBlock__Array* create_array(const std::vector<app::GroupBlock*>& items) {
            return il2cpp::array_new<app::GroupBlock__Array>(get_class(), items);
        }
    } // namespace GroupBlock
} // namespace app::classes::types
