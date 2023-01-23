#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum__Class.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>

namespace app::classes::types {
    namespace RecordableParsingGroup__Enum {
        namespace {
            inline app::RecordableParsingGroup__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RecordableParsingGroup__Enum__Class** type_info = &type_info_ref;
        inline app::RecordableParsingGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::RecordableParsingGroup__Enum__Class>(type_info, "", "RecordableParsingGroup");
        }
        inline app::RecordableParsingGroup__Enum* create() {
            return il2cpp::create_object<app::RecordableParsingGroup__Enum>(get_class());
        }
    } // namespace RecordableParsingGroup__Enum
} // namespace app::classes::types
