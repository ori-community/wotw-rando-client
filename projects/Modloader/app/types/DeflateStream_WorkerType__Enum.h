#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateStream_WorkerType__Enum {
        namespace {
            inline app::DeflateStream_WorkerType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DeflateStream_WorkerType__Enum__Class** type_info = &type_info_ref;
        inline app::DeflateStream_WorkerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_WorkerType__Enum__Class>(type_info, "Unity.IO.Compression", "DeflateStream", "WorkerType");
        }
        inline app::DeflateStream_WorkerType__Enum* create() {
            return il2cpp::create_object<app::DeflateStream_WorkerType__Enum>(get_class());
        }
    } // namespace DeflateStream_WorkerType__Enum
} // namespace app::classes::types
