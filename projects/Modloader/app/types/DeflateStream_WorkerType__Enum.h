#pragma once
#include <Modloader/app/structs/DeflateStream_WorkerType__Enum.h>
#include <Modloader/app/structs/DeflateStream_WorkerType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateStream_WorkerType__Enum {
        inline app::DeflateStream_WorkerType__Enum__Class** type_info() {
            static app::DeflateStream_WorkerType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeflateStream_WorkerType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeflateStream_WorkerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_WorkerType__Enum__Class>(type_info(), "Unity.IO.Compression", "DeflateStream", "WorkerType");
        }
        inline app::DeflateStream_WorkerType__Enum* create() {
            return il2cpp::create_object<app::DeflateStream_WorkerType__Enum>(get_class());
        }
    } // namespace DeflateStream_WorkerType__Enum
} // namespace app::classes::types
