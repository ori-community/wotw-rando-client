#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OrInstruction_OrByte__Class.h>
#include <Modloader/app/structs/OrInstruction_OrByte.h>

namespace app::classes::types {
    namespace OrInstruction_OrByte {
        inline app::OrInstruction_OrByte__Class** type_info = (app::OrInstruction_OrByte__Class**)(modloader::win::memory::resolve_rva(0x0471E488));
        inline app::OrInstruction_OrByte__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrByte");
        }
        inline app::OrInstruction_OrByte* create() {
            return il2cpp::create_object<app::OrInstruction_OrByte>(get_class());
        }
    } // namespace OrInstruction_OrByte
} // namespace app::classes::types
