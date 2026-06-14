#pragma once
#include <Modloader/app/structs/UberStateMatcher.h>
#include <Modloader/app/structs/UberStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateMatcher {
        inline app::UberStateMatcher__Class** type_info() {
            static app::UberStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateMatcher__Class**)(modloader::win::memory::resolve_rva(0x0477DBE0));
            }
            return cache;
        }
        inline app::UberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcher__Class>(type_info(), "", "UberStateMatcher");
        }
        inline app::UberStateMatcher* create() {
            return il2cpp::create_object<app::UberStateMatcher>(get_class());
        }
    } // namespace UberStateMatcher
} // namespace app::classes::types
