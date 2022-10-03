#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonReader {
        namespace {
            app::JsonReader__Class* type_info_ref = nullptr;
        }
        app::JsonReader__Class** type_info = &type_info_ref;
        inline app::JsonReader__Class* get_class() {
            return il2cpp::get_class<app::JsonReader__Class>(type_info, "Newtonsoft.Json", "JsonReader");
        }
        inline app::JsonReader* create() {
            return il2cpp::create_object<app::JsonReader>(get_class());
        }
    } // namespace JsonReader
} // namespace app::classes::types
