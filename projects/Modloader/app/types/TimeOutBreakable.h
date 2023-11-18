#pragma once
#include <Modloader/app/structs/TimeOutBreakable.h>
#include <Modloader/app/structs/TimeOutBreakable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeOutBreakable {
        inline app::TimeOutBreakable__Class** type_info() {
            static app::TimeOutBreakable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeOutBreakable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeOutBreakable__Class* get_class() {
            return il2cpp::get_class<app::TimeOutBreakable__Class>(type_info(), "", "TimeOutBreakable");
        }
        inline app::TimeOutBreakable* create() {
            return il2cpp::create_object<app::TimeOutBreakable>(get_class());
        }
    } // namespace TimeOutBreakable
} // namespace app::classes::types
