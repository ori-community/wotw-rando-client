#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallingRocksGroup {
        namespace {
            app::FallingRocksGroup__Class* type_info_ref = nullptr;
        }
        app::FallingRocksGroup__Class** type_info = &type_info_ref;
        inline app::FallingRocksGroup__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksGroup__Class>(type_info, "", "FallingRocksGroup");
        }
        inline app::FallingRocksGroup* create() {
            return il2cpp::create_object<app::FallingRocksGroup>(get_class());
        }
    } // namespace FallingRocksGroup
} // namespace app::classes::types
