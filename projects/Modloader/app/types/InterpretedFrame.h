#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InterpretedFrame {
        inline app::InterpretedFrame__Class** type_info = (app::InterpretedFrame__Class**)(modloader::win::memory::resolve_rva(0x04707488));
        inline app::InterpretedFrame__Class* get_class() {
            return il2cpp::get_class<app::InterpretedFrame__Class>(type_info, "System.Linq.Expressions.Interpreter", "InterpretedFrame");
        }
        inline app::InterpretedFrame* create() {
            return il2cpp::create_object<app::InterpretedFrame>(get_class());
        }
    } // namespace InterpretedFrame
} // namespace app::classes::types
