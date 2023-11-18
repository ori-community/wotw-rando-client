#pragma once
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/InterpretedFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterpretedFrame {
        inline app::InterpretedFrame__Class** type_info() {
            static app::InterpretedFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterpretedFrame__Class**)(modloader::win::memory::resolve_rva(0x04707488));
            }
            return cache;
        }
        inline app::InterpretedFrame__Class* get_class() {
            return il2cpp::get_class<app::InterpretedFrame__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InterpretedFrame");
        }
        inline app::InterpretedFrame* create() {
            return il2cpp::create_object<app::InterpretedFrame>(get_class());
        }
    } // namespace InterpretedFrame
} // namespace app::classes::types
