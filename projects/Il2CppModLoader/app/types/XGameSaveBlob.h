#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveBlob__Class** type_info;
        inline app::XGameSaveBlob__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlob__Class>(type_info, "XGamingRuntime", "XGameSaveBlob");
        }
        inline app::XGameSaveBlob* create() {
            return il2cpp::create_object<app::XGameSaveBlob>(get_class());
        }
        inline app::XGameSaveBlob__Array* create_array(int size) {
            return il2cpp::array_new<app::XGameSaveBlob__Array>(get_class(), size);
        }
    } // namespace XGameSaveBlob
} // namespace app::classes::types
