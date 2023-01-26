#pragma once
#include <Modloader/app/structs/RethrowException.h>
#include <Modloader/app/structs/RethrowException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RethrowException {
        inline app::RethrowException__Class** type_info() {
            static app::RethrowException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RethrowException__Class**)(modloader::win::memory::resolve_rva(0x04756D30));
            }
            return cache;
        }
        inline app::RethrowException__Class* get_class() {
            return il2cpp::get_class<app::RethrowException__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RethrowException");
        }
        inline app::RethrowException* create() {
            return il2cpp::create_object<app::RethrowException>(get_class());
        }
    } // namespace RethrowException
} // namespace app::classes::types
