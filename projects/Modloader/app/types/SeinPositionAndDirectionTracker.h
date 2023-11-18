#pragma once
#include <Modloader/app/structs/SeinPositionAndDirectionTracker.h>
#include <Modloader/app/structs/SeinPositionAndDirectionTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPositionAndDirectionTracker {
        inline app::SeinPositionAndDirectionTracker__Class** type_info() {
            static app::SeinPositionAndDirectionTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPositionAndDirectionTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPositionAndDirectionTracker__Class* get_class() {
            return il2cpp::get_class<app::SeinPositionAndDirectionTracker__Class>(type_info(), "", "SeinPositionAndDirectionTracker");
        }
        inline app::SeinPositionAndDirectionTracker* create() {
            return il2cpp::create_object<app::SeinPositionAndDirectionTracker>(get_class());
        }
    } // namespace SeinPositionAndDirectionTracker
} // namespace app::classes::types
