#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementalReadDecoder {
        namespace {
            app::IncrementalReadDecoder__Class* type_info_ref = nullptr;
        }
        app::IncrementalReadDecoder__Class** type_info = &type_info_ref;
        inline app::IncrementalReadDecoder__Class* get_class() {
            return il2cpp::get_class<app::IncrementalReadDecoder__Class>(type_info, "System.Xml", "IncrementalReadDecoder");
        }
        inline app::IncrementalReadDecoder* create() {
            return il2cpp::create_object<app::IncrementalReadDecoder>(get_class());
        }
    } // namespace IncrementalReadDecoder
} // namespace app::classes::types
