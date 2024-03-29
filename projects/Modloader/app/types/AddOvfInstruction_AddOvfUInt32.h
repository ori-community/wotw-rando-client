#pragma once
#include <Modloader/app/structs/AddOvfInstruction_AddOvfUInt32.h>
#include <Modloader/app/structs/AddOvfInstruction_AddOvfUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfUInt32 {
        inline app::AddOvfInstruction_AddOvfUInt32__Class** type_info() {
            static app::AddOvfInstruction_AddOvfUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddOvfInstruction_AddOvfUInt32__Class**)(modloader::win::memory::resolve_rva(0x047445D8));
            }
            return cache;
        }
        inline app::AddOvfInstruction_AddOvfUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfUInt32");
        }
        inline app::AddOvfInstruction_AddOvfUInt32* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfUInt32>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfUInt32
} // namespace app::classes::types
