#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SByteConverter {
        namespace {
            app::SByteConverter__Class* type_info_ref = nullptr;
        }
        app::SByteConverter__Class** type_info = &type_info_ref;
        inline app::SByteConverter__Class* get_class() {
            return il2cpp::get_class<app::SByteConverter__Class>(type_info, "System.ComponentModel", "SByteConverter");
        }
        inline app::SByteConverter* create() {
            return il2cpp::create_object<app::SByteConverter>(get_class());
        }
    } // namespace SByteConverter
} // namespace app::classes::types
