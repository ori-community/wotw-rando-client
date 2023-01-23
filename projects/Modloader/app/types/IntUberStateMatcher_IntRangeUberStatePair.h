#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntUberStateMatcher_IntRangeUberStatePair__Class.h>
#include <Modloader/app/structs/IntUberStateMatcher_IntRangeUberStatePair.h>

namespace app::classes::types {
    namespace IntUberStateMatcher_IntRangeUberStatePair {
        inline app::IntUberStateMatcher_IntRangeUberStatePair__Class** type_info = (app::IntUberStateMatcher_IntRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x0472E400));
        inline app::IntUberStateMatcher_IntRangeUberStatePair__Class* get_class() {
            return il2cpp::get_nested_class<app::IntUberStateMatcher_IntRangeUberStatePair__Class>(type_info, "", "IntUberStateMatcher", "IntRangeUberStatePair");
        }
        inline app::IntUberStateMatcher_IntRangeUberStatePair* create() {
            return il2cpp::create_object<app::IntUberStateMatcher_IntRangeUberStatePair>(get_class());
        }
    } // namespace IntUberStateMatcher_IntRangeUberStatePair
} // namespace app::classes::types
