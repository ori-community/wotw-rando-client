#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualSingle.h>
#include <Modloader/app/structs/EqualInstruction_EqualSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSingle {
        inline app::EqualInstruction_EqualSingle__Class** type_info() {
            static app::EqualInstruction_EqualSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0471F7C8));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSingle");
        }
        inline app::EqualInstruction_EqualSingle* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSingle>(get_class());
        }
    } // namespace EqualInstruction_EqualSingle
} // namespace app::classes::types
