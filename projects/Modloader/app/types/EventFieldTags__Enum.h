#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventFieldTags__Enum__Class.h>
#include <Modloader/app/structs/EventFieldTags__Enum.h>

namespace app::classes::types {
    namespace EventFieldTags__Enum {
        namespace {
            inline app::EventFieldTags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventFieldTags__Enum__Class** type_info = &type_info_ref;
        inline app::EventFieldTags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventFieldTags__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventFieldTags");
        }
        inline app::EventFieldTags__Enum* create() {
            return il2cpp::create_object<app::EventFieldTags__Enum>(get_class());
        }
    } // namespace EventFieldTags__Enum
} // namespace app::classes::types
