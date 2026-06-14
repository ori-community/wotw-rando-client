#pragma once
#include <Modloader/app/structs/CrashContext_Data.h>
#include <Modloader/app/structs/CrashContext_Data__Boxed.h>
#include <Modloader/app/structs/CrashContext_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrashContext_Data {
        inline app::CrashContext_Data__Class** type_info() {
            static app::CrashContext_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrashContext_Data__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrashContext_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Data__Class>(type_info(), "Moon", "CrashContext", "Data");
        }
        inline app::CrashContext_Data* create() {
            return il2cpp::create_object<app::CrashContext_Data>(get_class());
        }
        inline app::CrashContext_Data__Boxed* box(app::CrashContext_Data value) {
            return il2cpp::box_value<app::CrashContext_Data__Boxed>(get_class(), value);
        }
    } // namespace CrashContext_Data
} // namespace app::classes::types
