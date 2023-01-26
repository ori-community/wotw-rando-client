#pragma once
#include <Modloader/app/structs/TimeT.h>
#include <Modloader/app/structs/TimeT__Boxed.h>
#include <Modloader/app/structs/TimeT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeT {
        inline app::TimeT__Class** type_info() {
            static app::TimeT__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeT__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeT__Class* get_class() {
            return il2cpp::get_class<app::TimeT__Class>(type_info(), "XGamingRuntime.Interop", "TimeT");
        }
        inline app::TimeT* create() {
            return il2cpp::create_object<app::TimeT>(get_class());
        }
        inline app::TimeT__Boxed* box(app::TimeT value) {
            return il2cpp::box_value<app::TimeT__Boxed>(get_class(), value);
        }
    } // namespace TimeT
} // namespace app::classes::types
