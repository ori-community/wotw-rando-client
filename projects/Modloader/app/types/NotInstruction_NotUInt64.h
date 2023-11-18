#pragma once
#include <Modloader/app/structs/NotInstruction_NotUInt64.h>
#include <Modloader/app/structs/NotInstruction_NotUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotUInt64 {
        inline app::NotInstruction_NotUInt64__Class** type_info() {
            static app::NotInstruction_NotUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotInstruction_NotUInt64__Class**)(modloader::win::memory::resolve_rva(0x04769D30));
            }
            return cache;
        }
        inline app::NotInstruction_NotUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotInstruction", "NotUInt64");
        }
        inline app::NotInstruction_NotUInt64* create() {
            return il2cpp::create_object<app::NotInstruction_NotUInt64>(get_class());
        }
    } // namespace NotInstruction_NotUInt64
} // namespace app::classes::types
