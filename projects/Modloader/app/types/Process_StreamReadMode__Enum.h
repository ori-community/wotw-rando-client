#pragma once
#include <Modloader/app/structs/Process_StreamReadMode__Enum.h>
#include <Modloader/app/structs/Process_StreamReadMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Process_StreamReadMode__Enum {
        inline app::Process_StreamReadMode__Enum__Class** type_info() {
            static app::Process_StreamReadMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Process_StreamReadMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Process_StreamReadMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Process_StreamReadMode__Enum__Class>(type_info(), "System.Diagnostics", "Process", "StreamReadMode");
        }
        inline app::Process_StreamReadMode__Enum* create() {
            return il2cpp::create_object<app::Process_StreamReadMode__Enum>(get_class());
        }
    } // namespace Process_StreamReadMode__Enum
} // namespace app::classes::types
