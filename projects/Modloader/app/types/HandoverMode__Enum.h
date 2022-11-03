#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HandoverMode__Enum {
        namespace {
            inline app::HandoverMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HandoverMode__Enum__Class** type_info = &type_info_ref;
        inline app::HandoverMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandoverMode__Enum__Class>(type_info, "Moon.Timeline", "HandoverMode");
        }
        inline app::HandoverMode__Enum* create() {
            return il2cpp::create_object<app::HandoverMode__Enum>(get_class());
        }
    } // namespace HandoverMode__Enum
} // namespace app::classes::types
