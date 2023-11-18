#pragma once
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/Expression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression {
        inline app::Expression__Class** type_info() {
            static app::Expression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Expression__Class**)(modloader::win::memory::resolve_rva(0x0476EED8));
            }
            return cache;
        }
        inline app::Expression__Class* get_class() {
            return il2cpp::get_class<app::Expression__Class>(type_info(), "System.Linq.Expressions", "Expression");
        }
        inline app::Expression* create() {
            return il2cpp::create_object<app::Expression>(get_class());
        }
        inline app::Expression__Array* create_array(int size) {
            return il2cpp::array_new<app::Expression__Array>(get_class(), size);
        }
        inline app::Expression__Array* create_array(const std::vector<app::Expression*>& items) {
            return il2cpp::array_new<app::Expression__Array>(get_class(), items);
        }
    } // namespace Expression
} // namespace app::classes::types
