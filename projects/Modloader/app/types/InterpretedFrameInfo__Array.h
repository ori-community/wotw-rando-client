#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InterpretedFrameInfo__Array__Class.h>
#include <Modloader/app/structs/InterpretedFrameInfo__Array.h>

namespace app::classes::types {
    namespace InterpretedFrameInfo__Array {
        namespace {
            inline app::InterpretedFrameInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::InterpretedFrameInfo__Array__Class** type_info = &type_info_ref;
        inline app::InterpretedFrameInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InterpretedFrameInfo__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "InterpretedFrameInfo[]");
        }
        inline app::InterpretedFrameInfo__Array* create() {
            return il2cpp::create_object<app::InterpretedFrameInfo__Array>(get_class());
        }
    } // namespace InterpretedFrameInfo__Array
} // namespace app::classes::types
