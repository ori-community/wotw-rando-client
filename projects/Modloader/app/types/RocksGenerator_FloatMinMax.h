#pragma once
#include <Modloader/app/structs/RocksGenerator_FloatMinMax.h>
#include <Modloader/app/structs/RocksGenerator_FloatMinMax__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RocksGenerator_FloatMinMax {
        inline app::RocksGenerator_FloatMinMax__Class** type_info() {
            static app::RocksGenerator_FloatMinMax__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RocksGenerator_FloatMinMax__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RocksGenerator_FloatMinMax__Class* get_class() {
            return il2cpp::get_nested_class<app::RocksGenerator_FloatMinMax__Class>(type_info(), "", "RocksGenerator", "FloatMinMax");
        }
        inline app::RocksGenerator_FloatMinMax* create() {
            return il2cpp::create_object<app::RocksGenerator_FloatMinMax>(get_class());
        }
    } // namespace RocksGenerator_FloatMinMax
} // namespace app::classes::types
