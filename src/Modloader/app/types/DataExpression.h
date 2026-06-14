#pragma once
#include <Modloader/app/structs/DataExpression.h>
#include <Modloader/app/structs/DataExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataExpression {
        inline app::DataExpression__Class** type_info() {
            static app::DataExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataExpression__Class**)(modloader::win::memory::resolve_rva(0x04707590));
            }
            return cache;
        }
        inline app::DataExpression__Class* get_class() {
            return il2cpp::get_class<app::DataExpression__Class>(type_info(), "System.Data", "DataExpression");
        }
        inline app::DataExpression* create() {
            return il2cpp::create_object<app::DataExpression>(get_class());
        }
    } // namespace DataExpression
} // namespace app::classes::types
