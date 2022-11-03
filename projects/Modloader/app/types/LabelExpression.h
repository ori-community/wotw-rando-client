#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LabelExpression {
        inline app::LabelExpression__Class** type_info = (app::LabelExpression__Class**)(modloader::win::memory::resolve_rva(0x04779840));
        inline app::LabelExpression__Class* get_class() {
            return il2cpp::get_class<app::LabelExpression__Class>(type_info, "System.Linq.Expressions", "LabelExpression");
        }
        inline app::LabelExpression* create() {
            return il2cpp::create_object<app::LabelExpression>(get_class());
        }
    } // namespace LabelExpression
} // namespace app::classes::types
