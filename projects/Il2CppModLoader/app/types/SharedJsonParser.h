#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedJsonParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SharedJsonParser__Class** type_info;
        inline app::SharedJsonParser__Class* get_class() {
            return il2cpp::get_class<app::SharedJsonParser__Class>(type_info, "Moon", "SharedJsonParser");
        }
        inline app::SharedJsonParser* create() {
            return il2cpp::create_object<app::SharedJsonParser>(get_class());
        }
        inline app::SharedJsonParser__Boxed* box(app::SharedJsonParser value) {
            return il2cpp::box_value<app::SharedJsonParser__Boxed>(get_class(), value);
        }
    } // namespace SharedJsonParser
} // namespace app::classes::types
