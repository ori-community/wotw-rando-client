#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OutputBuffer_BufferState__Class.h>
#include <Modloader/app/structs/OutputBuffer_BufferState.h>
#include <Modloader/app/structs/OutputBuffer_BufferState__Boxed.h>

namespace app::classes::types {
    namespace OutputBuffer_BufferState {
        namespace {
            inline app::OutputBuffer_BufferState__Class* type_info_ref = nullptr;
        }
        inline app::OutputBuffer_BufferState__Class** type_info = &type_info_ref;
        inline app::OutputBuffer_BufferState__Class* get_class() {
            return il2cpp::get_nested_class<app::OutputBuffer_BufferState__Class>(type_info, "Unity.IO.Compression", "OutputBuffer", "BufferState");
        }
        inline app::OutputBuffer_BufferState* create() {
            return il2cpp::create_object<app::OutputBuffer_BufferState>(get_class());
        }
        inline app::OutputBuffer_BufferState__Boxed* box(app::OutputBuffer_BufferState value) {
            return il2cpp::box_value<app::OutputBuffer_BufferState__Boxed>(get_class(), value);
        }
    } // namespace OutputBuffer_BufferState
} // namespace app::classes::types
