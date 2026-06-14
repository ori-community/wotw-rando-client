#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualSingleLiftedToNull.h>
#include <Modloader/app/structs/EqualInstruction_EqualSingleLiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSingleLiftedToNull {
        inline app::EqualInstruction_EqualSingleLiftedToNull__Class** type_info() {
            static app::EqualInstruction_EqualSingleLiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualSingleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047591A0));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualSingleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSingleLiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSingleLiftedToNull");
        }
        inline app::EqualInstruction_EqualSingleLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSingleLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualSingleLiftedToNull
} // namespace app::classes::types
