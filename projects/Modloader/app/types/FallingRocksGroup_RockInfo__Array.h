#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FallingRocksGroup_RockInfo__Array {
        namespace {
            inline app::FallingRocksGroup_RockInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::FallingRocksGroup_RockInfo__Array__Class** type_info = &type_info_ref;
        inline app::FallingRocksGroup_RockInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksGroup_RockInfo__Array__Class>(type_info, "", "FallingRocksGroup+RockInfo[]");
        }
        inline app::FallingRocksGroup_RockInfo__Array* create() {
            return il2cpp::create_object<app::FallingRocksGroup_RockInfo__Array>(get_class());
        }
    } // namespace FallingRocksGroup_RockInfo__Array
} // namespace app::classes::types
