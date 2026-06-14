#pragma once
#include <Modloader/app/structs/LocalDefinition__Array.h>
#include <Modloader/app/structs/LocalDefinition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDefinition__Array {
        inline app::LocalDefinition__Array__Class** type_info() {
            static app::LocalDefinition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalDefinition__Array__Class**)(modloader::win::memory::resolve_rva(0x04738FB8));
            }
            return cache;
        }
        inline app::LocalDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDefinition__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalDefinition[]");
        }
        inline app::LocalDefinition__Array* create() {
            return il2cpp::create_object<app::LocalDefinition__Array>(get_class());
        }
    } // namespace LocalDefinition__Array
} // namespace app::classes::types
