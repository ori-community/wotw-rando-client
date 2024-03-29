#pragma once
#include <Modloader/app/structs/NullableMethodCallInstruction.h>
#include <Modloader/app/structs/NullableMethodCallInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction {
        inline app::NullableMethodCallInstruction__Class** type_info() {
            static app::NullableMethodCallInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullableMethodCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472FC98));
            }
            return cache;
        }
        inline app::NullableMethodCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::NullableMethodCallInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction");
        }
        inline app::NullableMethodCallInstruction* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction>(get_class());
        }
    } // namespace NullableMethodCallInstruction
} // namespace app::classes::types
