#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadStaticFieldInstruction__Class.h>
#include <Modloader/app/structs/LoadStaticFieldInstruction.h>

namespace app::classes::types {
    namespace LoadStaticFieldInstruction {
        inline app::LoadStaticFieldInstruction__Class** type_info = (app::LoadStaticFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470DD50));
        inline app::LoadStaticFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadStaticFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadStaticFieldInstruction");
        }
        inline app::LoadStaticFieldInstruction* create() {
            return il2cpp::create_object<app::LoadStaticFieldInstruction>(get_class());
        }
    } // namespace LoadStaticFieldInstruction
} // namespace app::classes::types
