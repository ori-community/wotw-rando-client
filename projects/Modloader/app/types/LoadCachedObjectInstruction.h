#pragma once
#include <Modloader/app/structs/LoadCachedObjectInstruction.h>
#include <Modloader/app/structs/LoadCachedObjectInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadCachedObjectInstruction {
        inline app::LoadCachedObjectInstruction__Class** type_info() {
            static app::LoadCachedObjectInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadCachedObjectInstruction__Class**)(modloader::win::memory::resolve_rva(0x04738020));
            }
            return cache;
        }
        inline app::LoadCachedObjectInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadCachedObjectInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LoadCachedObjectInstruction");
        }
        inline app::LoadCachedObjectInstruction* create() {
            return il2cpp::create_object<app::LoadCachedObjectInstruction>(get_class());
        }
    } // namespace LoadCachedObjectInstruction
} // namespace app::classes::types
