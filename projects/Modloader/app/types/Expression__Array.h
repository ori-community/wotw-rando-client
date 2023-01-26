#pragma once
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/Expression__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression__Array {
        inline app::Expression__Array__Class** type_info() {
            static app::Expression__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Expression__Array__Class**)(modloader::win::memory::resolve_rva(0x047927A0));
            }
            return cache;
        }
        inline app::Expression__Array__Class* get_class() {
            return il2cpp::get_class<app::Expression__Array__Class>(type_info(), "System.Linq.Expressions", "Expression[]");
        }
        inline app::Expression__Array* create() {
            return il2cpp::create_object<app::Expression__Array>(get_class());
        }
    } // namespace Expression__Array
} // namespace app::classes::types
