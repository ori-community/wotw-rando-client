#pragma once
#include <Modloader/app/structs/IntUberStateMatcher_IntRangeUberStatePair.h>
#include <Modloader/app/structs/IntUberStateMatcher_IntRangeUberStatePair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntUberStateMatcher_IntRangeUberStatePair {
        inline app::IntUberStateMatcher_IntRangeUberStatePair__Class** type_info() {
            static app::IntUberStateMatcher_IntRangeUberStatePair__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntUberStateMatcher_IntRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x0472E400));
            }
            return cache;
        }
        inline app::IntUberStateMatcher_IntRangeUberStatePair__Class* get_class() {
            return il2cpp::get_nested_class<app::IntUberStateMatcher_IntRangeUberStatePair__Class>(type_info(), "", "IntUberStateMatcher", "IntRangeUberStatePair");
        }
        inline app::IntUberStateMatcher_IntRangeUberStatePair* create() {
            return il2cpp::create_object<app::IntUberStateMatcher_IntRangeUberStatePair>(get_class());
        }
    } // namespace IntUberStateMatcher_IntRangeUberStatePair
} // namespace app::classes::types
