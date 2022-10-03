#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallingRocksGroup_RockInfo__Array {
        namespace {
            app::FallingRocksGroup_RockInfo__Array__Class* type_info_ref = nullptr;
        }
        app::FallingRocksGroup_RockInfo__Array__Class** type_info = &type_info_ref;
        inline app::FallingRocksGroup_RockInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksGroup_RockInfo__Array__Class>(type_info, "", "FallingRocksGroup+RockInfo[]");
        }
        inline app::FallingRocksGroup_RockInfo__Array* create() {
            return il2cpp::create_object<app::FallingRocksGroup_RockInfo__Array>(get_class());
        }
    } // namespace FallingRocksGroup_RockInfo__Array
} // namespace app::classes::types
