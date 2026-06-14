#pragma once
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordableParsingGroup__Enum {
        inline app::RecordableParsingGroup__Enum__Class** type_info() {
            static app::RecordableParsingGroup__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordableParsingGroup__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordableParsingGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::RecordableParsingGroup__Enum__Class>(type_info(), "", "RecordableParsingGroup");
        }
        inline app::RecordableParsingGroup__Enum* create() {
            return il2cpp::create_object<app::RecordableParsingGroup__Enum>(get_class());
        }
    } // namespace RecordableParsingGroup__Enum
} // namespace app::classes::types
