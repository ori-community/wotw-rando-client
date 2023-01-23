#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InitializeLocalInstruction_MutableBox__Class.h>
#include <Modloader/app/structs/InitializeLocalInstruction_MutableBox.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_MutableBox {
        inline app::InitializeLocalInstruction_MutableBox__Class** type_info = (app::InitializeLocalInstruction_MutableBox__Class**)(modloader::win::memory::resolve_rva(0x04761F90));
        inline app::InitializeLocalInstruction_MutableBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_MutableBox__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "MutableBox");
        }
        inline app::InitializeLocalInstruction_MutableBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_MutableBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_MutableBox
} // namespace app::classes::types
