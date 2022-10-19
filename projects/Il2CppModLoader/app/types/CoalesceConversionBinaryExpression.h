#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CoalesceConversionBinaryExpression {
        inline app::CoalesceConversionBinaryExpression__Class** type_info = (app::CoalesceConversionBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04729FB8));
        inline app::CoalesceConversionBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::CoalesceConversionBinaryExpression__Class>(type_info, "System.Linq.Expressions", "CoalesceConversionBinaryExpression");
        }
        inline app::CoalesceConversionBinaryExpression* create() {
            return il2cpp::create_object<app::CoalesceConversionBinaryExpression>(get_class());
        }
    } // namespace CoalesceConversionBinaryExpression
} // namespace app::classes::types
