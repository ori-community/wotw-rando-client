#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordableType__Enum__Class.h>
#include <Modloader/app/structs/RecordableType__Enum.h>

namespace app::classes::types {
    namespace RecordableType__Enum {
        namespace {
            inline app::RecordableType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RecordableType__Enum__Class** type_info = &type_info_ref;
        inline app::RecordableType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RecordableType__Enum__Class>(type_info, "Moon.Timeline", "RecordableType");
        }
        inline app::RecordableType__Enum* create() {
            return il2cpp::create_object<app::RecordableType__Enum>(get_class());
        }
    } // namespace RecordableType__Enum
} // namespace app::classes::types
