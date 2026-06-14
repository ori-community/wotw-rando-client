#pragma once
#include <Modloader/app/structs/CoalesceConversionBinaryExpression.h>
#include <Modloader/app/structs/CoalesceConversionBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CoalesceConversionBinaryExpression {
        inline app::CoalesceConversionBinaryExpression__Class** type_info() {
            static app::CoalesceConversionBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CoalesceConversionBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04729FB8));
            }
            return cache;
        }
        inline app::CoalesceConversionBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::CoalesceConversionBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "CoalesceConversionBinaryExpression");
        }
        inline app::CoalesceConversionBinaryExpression* create() {
            return il2cpp::create_object<app::CoalesceConversionBinaryExpression>(get_class());
        }
    } // namespace CoalesceConversionBinaryExpression
} // namespace app::classes::types
