#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameWorldAreaID__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameWorldAreaID__Enum__Class** type_info;
        inline app::GameWorldAreaID__Enum__Class* get_class() {
            return il2cpp::get_class<app::GameWorldAreaID__Enum__Class>(type_info, "", "GameWorldAreaID");
        }
        inline app::GameWorldAreaID__Enum* create() {
            return il2cpp::create_object<app::GameWorldAreaID__Enum>(get_class());
        }
        inline app::GameWorldAreaID__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameWorldAreaID__Enum__Array>(get_class(), size);
        }
        inline app::GameWorldAreaID__Enum__Array* create_array(const std::vector<app::GameWorldAreaID__Enum*>& items) {
            return il2cpp::array_new<app::GameWorldAreaID__Enum__Array>(get_class(), items);
        }
    } // namespace GameWorldAreaID__Enum
} // namespace app::classes::types
