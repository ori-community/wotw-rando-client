#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RocksGenerator_Vector3MinMax {
        namespace {
            inline app::RocksGenerator_Vector3MinMax__Class* type_info_ref = nullptr;
        }
        inline app::RocksGenerator_Vector3MinMax__Class** type_info = &type_info_ref;
        inline app::RocksGenerator_Vector3MinMax__Class* get_class() {
            return il2cpp::get_nested_class<app::RocksGenerator_Vector3MinMax__Class>(type_info, "", "RocksGenerator", "Vector3MinMax");
        }
        inline app::RocksGenerator_Vector3MinMax* create() {
            return il2cpp::create_object<app::RocksGenerator_Vector3MinMax>(get_class());
        }
    } // namespace RocksGenerator_Vector3MinMax
} // namespace app::classes::types
