#pragma once
#include <Modloader/app/structs/ExpressionParser_ReservedWords__Array.h>
#include <Modloader/app/structs/ExpressionParser_ReservedWords__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpressionParser_ReservedWords__Array {
        inline app::ExpressionParser_ReservedWords__Array__Class** type_info() {
            static app::ExpressionParser_ReservedWords__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpressionParser_ReservedWords__Array__Class**)(modloader::win::memory::resolve_rva(0x0477E250));
            }
            return cache;
        }
        inline app::ExpressionParser_ReservedWords__Array__Class* get_class() {
            return il2cpp::get_class<app::ExpressionParser_ReservedWords__Array__Class>(type_info(), "System.Data", "ExpressionParser+ReservedWords[]");
        }
        inline app::ExpressionParser_ReservedWords__Array* create() {
            return il2cpp::create_object<app::ExpressionParser_ReservedWords__Array>(get_class());
        }
    } // namespace ExpressionParser_ReservedWords__Array
} // namespace app::classes::types
