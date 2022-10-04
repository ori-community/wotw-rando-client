#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICageMetaData {
        namespace {
            app::ICageMetaData__Class* type_info_ref = nullptr;
        }
        app::ICageMetaData__Class** type_info = &type_info_ref;
        inline app::ICageMetaData__Class* get_class() {
            return il2cpp::get_class<app::ICageMetaData__Class>(type_info, "", "ICageMetaData");
        }
        inline app::ICageMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::ICageMetaData__Array>(get_class(), size);
        }
    } // namespace ICageMetaData
} // namespace app::classes::types
