#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiTimelineFloatValue__Class.h>
#include <Modloader/app/structs/MultiTimelineFloatValue.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValue {
        namespace {
            inline app::MultiTimelineFloatValue__Class* type_info_ref = nullptr;
        }
        inline app::MultiTimelineFloatValue__Class** type_info = &type_info_ref;
        inline app::MultiTimelineFloatValue__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValue__Class>(type_info, "", "MultiTimelineFloatValue");
        }
        inline app::MultiTimelineFloatValue* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValue>(get_class());
        }
    } // namespace MultiTimelineFloatValue
} // namespace app::classes::types
