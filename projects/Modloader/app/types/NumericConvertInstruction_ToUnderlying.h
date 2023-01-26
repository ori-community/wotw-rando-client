#pragma once
#include <Modloader/app/structs/NumericConvertInstruction_ToUnderlying.h>
#include <Modloader/app/structs/NumericConvertInstruction_ToUnderlying__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_ToUnderlying {
        inline app::NumericConvertInstruction_ToUnderlying__Class** type_info() {
            static app::NumericConvertInstruction_ToUnderlying__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NumericConvertInstruction_ToUnderlying__Class**)(modloader::win::memory::resolve_rva(0x04766380));
            }
            return cache;
        }
        inline app::NumericConvertInstruction_ToUnderlying__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_ToUnderlying__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "ToUnderlying");
        }
        inline app::NumericConvertInstruction_ToUnderlying* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_ToUnderlying>(get_class());
        }
    } // namespace NumericConvertInstruction_ToUnderlying
} // namespace app::classes::types
