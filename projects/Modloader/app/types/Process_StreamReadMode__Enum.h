#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Process_StreamReadMode__Enum {
        namespace {
            inline app::Process_StreamReadMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Process_StreamReadMode__Enum__Class** type_info = &type_info_ref;
        inline app::Process_StreamReadMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Process_StreamReadMode__Enum__Class>(type_info, "System.Diagnostics", "Process", "StreamReadMode");
        }
        inline app::Process_StreamReadMode__Enum* create() {
            return il2cpp::create_object<app::Process_StreamReadMode__Enum>(get_class());
        }
    } // namespace Process_StreamReadMode__Enum
} // namespace app::classes::types
