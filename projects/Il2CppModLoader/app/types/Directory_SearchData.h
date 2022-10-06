#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Directory_SearchData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Directory_SearchData__Class** type_info;
        inline app::Directory_SearchData__Class* get_class() {
            return il2cpp::get_nested_class<app::Directory_SearchData__Class>(type_info, "System.IO", "Directory", "SearchData");
        }
        inline app::Directory_SearchData* create() {
            return il2cpp::create_object<app::Directory_SearchData>(get_class());
        }
        inline app::Directory_SearchData__Array* create_array(int size) {
            return il2cpp::array_new<app::Directory_SearchData__Array>(get_class(), size);
        }
        inline app::Directory_SearchData__Array* create_array(const std::vector<app::Directory_SearchData*>& items) {
            return il2cpp::array_new<app::Directory_SearchData__Array>(get_class(), items);
        }
    } // namespace Directory_SearchData
} // namespace app::classes::types
