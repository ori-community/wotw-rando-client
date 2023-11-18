#pragma once
#include <Modloader/app/structs/LabelExpression.h>
#include <Modloader/app/structs/LabelExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelExpression {
        inline app::LabelExpression__Class** type_info() {
            static app::LabelExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LabelExpression__Class**)(modloader::win::memory::resolve_rva(0x04779840));
            }
            return cache;
        }
        inline app::LabelExpression__Class* get_class() {
            return il2cpp::get_class<app::LabelExpression__Class>(type_info(), "System.Linq.Expressions", "LabelExpression");
        }
        inline app::LabelExpression* create() {
            return il2cpp::create_object<app::LabelExpression>(get_class());
        }
    } // namespace LabelExpression
} // namespace app::classes::types
