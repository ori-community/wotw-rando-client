#pragma once
#include <Modloader/app/structs/CatchBlock__Array.h>
#include <Modloader/app/structs/CatchBlock__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatchBlock__Array {
        inline app::CatchBlock__Array__Class** type_info() {
            static app::CatchBlock__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CatchBlock__Array__Class**)(modloader::win::memory::resolve_rva(0x04726490));
            }
            return cache;
        }
        inline app::CatchBlock__Array__Class* get_class() {
            return il2cpp::get_class<app::CatchBlock__Array__Class>(type_info(), "System.Linq.Expressions", "CatchBlock[]");
        }
        inline app::CatchBlock__Array* create() {
            return il2cpp::create_object<app::CatchBlock__Array>(get_class());
        }
    } // namespace CatchBlock__Array
} // namespace app::classes::types
