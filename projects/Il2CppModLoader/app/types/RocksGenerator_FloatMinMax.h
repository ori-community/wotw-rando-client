#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RocksGenerator_FloatMinMax {
        namespace {
            inline app::RocksGenerator_FloatMinMax__Class* type_info_ref = nullptr;
        }
        inline app::RocksGenerator_FloatMinMax__Class** type_info = &type_info_ref;
        inline app::RocksGenerator_FloatMinMax__Class* get_class() {
            return il2cpp::get_nested_class<app::RocksGenerator_FloatMinMax__Class>(type_info, "", "RocksGenerator", "FloatMinMax");
        }
        inline app::RocksGenerator_FloatMinMax* create() {
            return il2cpp::create_object<app::RocksGenerator_FloatMinMax>(get_class());
        }
    } // namespace RocksGenerator_FloatMinMax
} // namespace app::classes::types
