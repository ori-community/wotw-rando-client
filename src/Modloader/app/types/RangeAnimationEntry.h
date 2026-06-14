#pragma once
#include <Modloader/app/structs/RangeAnimationEntry.h>
#include <Modloader/app/structs/RangeAnimationEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeAnimationEntry {
        inline app::RangeAnimationEntry__Class** type_info() {
            static app::RangeAnimationEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RangeAnimationEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RangeAnimationEntry__Class* get_class() {
            return il2cpp::get_class<app::RangeAnimationEntry__Class>(type_info(), "Moon", "RangeAnimationEntry");
        }
        inline app::RangeAnimationEntry* create() {
            return il2cpp::create_object<app::RangeAnimationEntry>(get_class());
        }
    } // namespace RangeAnimationEntry
} // namespace app::classes::types
