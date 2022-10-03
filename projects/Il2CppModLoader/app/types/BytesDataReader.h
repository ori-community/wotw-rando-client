#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BytesDataReader {
        namespace {
            app::BytesDataReader__Class* type_info_ref = nullptr;
        }
        app::BytesDataReader__Class** type_info = &type_info_ref;
        inline app::BytesDataReader__Class* get_class() {
            return il2cpp::get_class<app::BytesDataReader__Class>(type_info, "Moon.Network.Web", "BytesDataReader");
        }
        inline app::BytesDataReader* create() {
            return il2cpp::create_object<app::BytesDataReader>(get_class());
        }
    } // namespace BytesDataReader
} // namespace app::classes::types
