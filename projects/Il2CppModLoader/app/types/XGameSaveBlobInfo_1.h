#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlobInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveBlobInfo_1__Class** type_info;
        inline app::XGameSaveBlobInfo_1__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlobInfo_1__Class>(type_info, "XGamingRuntime", "XGameSaveBlobInfo");
        }
        inline app::XGameSaveBlobInfo_1* create() {
            return il2cpp::create_object<app::XGameSaveBlobInfo_1>(get_class());
        }
        inline app::XGameSaveBlobInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::XGameSaveBlobInfo_1__Array>(get_class(), size);
        }
        inline app::XGameSaveBlobInfo_1__Array* create_array(const std::vector<app::XGameSaveBlobInfo_1*>& items) {
            return il2cpp::array_new<app::XGameSaveBlobInfo_1__Array>(get_class(), items);
        }
    } // namespace XGameSaveBlobInfo_1
} // namespace app::classes::types
