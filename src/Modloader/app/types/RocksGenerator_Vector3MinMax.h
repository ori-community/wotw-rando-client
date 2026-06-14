#pragma once
#include <Modloader/app/structs/RocksGenerator_Vector3MinMax.h>
#include <Modloader/app/structs/RocksGenerator_Vector3MinMax__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RocksGenerator_Vector3MinMax {
        inline app::RocksGenerator_Vector3MinMax__Class** type_info() {
            static app::RocksGenerator_Vector3MinMax__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RocksGenerator_Vector3MinMax__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RocksGenerator_Vector3MinMax__Class* get_class() {
            return il2cpp::get_nested_class<app::RocksGenerator_Vector3MinMax__Class>(type_info(), "", "RocksGenerator", "Vector3MinMax");
        }
        inline app::RocksGenerator_Vector3MinMax* create() {
            return il2cpp::create_object<app::RocksGenerator_Vector3MinMax>(get_class());
        }
    } // namespace RocksGenerator_Vector3MinMax
} // namespace app::classes::types
