#pragma once
#include <Modloader/app/structs/FloatRangeUberStatePair.h>
#include <Modloader/app/structs/FloatRangeUberStatePair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatRangeUberStatePair {
        inline app::FloatRangeUberStatePair__Class** type_info() {
            static app::FloatRangeUberStatePair__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x047018C8));
            }
            return cache;
        }
        inline app::FloatRangeUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::FloatRangeUberStatePair__Class>(type_info(), "", "FloatRangeUberStatePair");
        }
        inline app::FloatRangeUberStatePair* create() {
            return il2cpp::create_object<app::FloatRangeUberStatePair>(get_class());
        }
    } // namespace FloatRangeUberStatePair
} // namespace app::classes::types
