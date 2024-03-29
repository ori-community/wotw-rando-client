#pragma once
#include <Modloader/app/structs/IBoxableInstruction.h>
#include <Modloader/app/structs/IBoxableInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBoxableInstruction {
        inline app::IBoxableInstruction__Class** type_info() {
            static app::IBoxableInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBoxableInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476DFC8));
            }
            return cache;
        }
        inline app::IBoxableInstruction__Class* get_class() {
            return il2cpp::get_class<app::IBoxableInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IBoxableInstruction");
        }
    } // namespace IBoxableInstruction
} // namespace app::classes::types
