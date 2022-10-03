#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPositionAndDirectionTracker {
        namespace {
            app::SeinPositionAndDirectionTracker__Class* type_info_ref = nullptr;
        }
        app::SeinPositionAndDirectionTracker__Class** type_info = &type_info_ref;
        inline app::SeinPositionAndDirectionTracker__Class* get_class() {
            return il2cpp::get_class<app::SeinPositionAndDirectionTracker__Class>(type_info, "", "SeinPositionAndDirectionTracker");
        }
        inline app::SeinPositionAndDirectionTracker* create() {
            return il2cpp::create_object<app::SeinPositionAndDirectionTracker>(get_class());
        }
    } // namespace SeinPositionAndDirectionTracker
} // namespace app::classes::types
