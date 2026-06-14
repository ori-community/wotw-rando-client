#pragma once
#include <Modloader/app/structs/CrashContext_HeaderData.h>
#include <Modloader/app/structs/CrashContext_HeaderData__Boxed.h>
#include <Modloader/app/structs/CrashContext_HeaderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrashContext_HeaderData {
        inline app::CrashContext_HeaderData__Class** type_info() {
            static app::CrashContext_HeaderData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrashContext_HeaderData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrashContext_HeaderData__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_HeaderData__Class>(type_info(), "Moon", "CrashContext", "HeaderData");
        }
        inline app::CrashContext_HeaderData* create() {
            return il2cpp::create_object<app::CrashContext_HeaderData>(get_class());
        }
        inline app::CrashContext_HeaderData__Boxed* box(app::CrashContext_HeaderData value) {
            return il2cpp::box_value<app::CrashContext_HeaderData__Boxed>(get_class(), value);
        }
    } // namespace CrashContext_HeaderData
} // namespace app::classes::types
