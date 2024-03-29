#pragma once
#include <Modloader/app/structs/AddOvfInstruction_AddOvfInt64.h>
#include <Modloader/app/structs/AddOvfInstruction_AddOvfInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfInt64 {
        inline app::AddOvfInstruction_AddOvfInt64__Class** type_info() {
            static app::AddOvfInstruction_AddOvfInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddOvfInstruction_AddOvfInt64__Class**)(modloader::win::memory::resolve_rva(0x0476BB78));
            }
            return cache;
        }
        inline app::AddOvfInstruction_AddOvfInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfInt64");
        }
        inline app::AddOvfInstruction_AddOvfInt64* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfInt64>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfInt64
} // namespace app::classes::types
