#pragma once
#include <Modloader/app/structs/AkDynamicSequenceType__Enum.h>
#include <Modloader/app/structs/AkDynamicSequenceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkDynamicSequenceType__Enum {
        inline app::AkDynamicSequenceType__Enum__Class** type_info() {
            static app::AkDynamicSequenceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkDynamicSequenceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkDynamicSequenceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkDynamicSequenceType__Enum__Class>(type_info(), "", "AkDynamicSequenceType");
        }
        inline app::AkDynamicSequenceType__Enum* create() {
            return il2cpp::create_object<app::AkDynamicSequenceType__Enum>(get_class());
        }
    } // namespace AkDynamicSequenceType__Enum
} // namespace app::classes::types
