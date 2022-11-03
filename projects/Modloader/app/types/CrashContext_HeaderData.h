#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrashContext_HeaderData {
        namespace {
            inline app::CrashContext_HeaderData__Class* type_info_ref = nullptr;
        }
        inline app::CrashContext_HeaderData__Class** type_info = &type_info_ref;
        inline app::CrashContext_HeaderData__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_HeaderData__Class>(type_info, "Moon", "CrashContext", "HeaderData");
        }
        inline app::CrashContext_HeaderData* create() {
            return il2cpp::create_object<app::CrashContext_HeaderData>(get_class());
        }
        inline app::CrashContext_HeaderData__Boxed* box(app::CrashContext_HeaderData value) {
            return il2cpp::box_value<app::CrashContext_HeaderData__Boxed>(get_class(), value);
        }
    } // namespace CrashContext_HeaderData
} // namespace app::classes::types
