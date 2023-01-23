#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkipUberStateDuplicationHookAttribute__Class.h>
#include <Modloader/app/structs/SkipUberStateDuplicationHookAttribute.h>

namespace app::classes::types {
    namespace SkipUberStateDuplicationHookAttribute {
        namespace {
            inline app::SkipUberStateDuplicationHookAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SkipUberStateDuplicationHookAttribute__Class** type_info = &type_info_ref;
        inline app::SkipUberStateDuplicationHookAttribute__Class* get_class() {
            return il2cpp::get_class<app::SkipUberStateDuplicationHookAttribute__Class>(type_info, "Moon", "SkipUberStateDuplicationHookAttribute");
        }
        inline app::SkipUberStateDuplicationHookAttribute* create() {
            return il2cpp::create_object<app::SkipUberStateDuplicationHookAttribute>(get_class());
        }
    } // namespace SkipUberStateDuplicationHookAttribute
} // namespace app::classes::types
