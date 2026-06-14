#pragma once
#include <Modloader/app/structs/ChainLevelAndCount.h>
#include <Modloader/app/structs/ChainLevelAndCount__Array.h>
#include <Modloader/app/structs/ChainLevelAndCount__Boxed.h>
#include <Modloader/app/structs/ChainLevelAndCount__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChainLevelAndCount {
        inline app::ChainLevelAndCount__Class** type_info() {
            static app::ChainLevelAndCount__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChainLevelAndCount__Class**)(modloader::win::memory::resolve_rva(0x047423C0));
            }
            return cache;
        }
        inline app::ChainLevelAndCount__Class* get_class() {
            return il2cpp::get_class<app::ChainLevelAndCount__Class>(type_info(), "Motvin.Collections", "ChainLevelAndCount");
        }
        inline app::ChainLevelAndCount* create() {
            return il2cpp::create_object<app::ChainLevelAndCount>(get_class());
        }
        inline app::ChainLevelAndCount__Boxed* box(app::ChainLevelAndCount value) {
            return il2cpp::box_value<app::ChainLevelAndCount__Boxed>(get_class(), value);
        }
        inline app::ChainLevelAndCount__Array* create_array(int size) {
            return il2cpp::array_new<app::ChainLevelAndCount__Array>(get_class(), size);
        }
        inline app::ChainLevelAndCount__Array* create_array(const std::vector<app::ChainLevelAndCount>& items) {
            return il2cpp::array_new<app::ChainLevelAndCount__Array>(get_class(), items);
        }
    } // namespace ChainLevelAndCount
} // namespace app::classes::types
