#pragma once
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/Interpreter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Interpreter {
        inline app::Interpreter__Class** type_info() {
            static app::Interpreter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Interpreter__Class**)(modloader::win::memory::resolve_rva(0x04733540));
            }
            return cache;
        }
        inline app::Interpreter__Class* get_class() {
            return il2cpp::get_class<app::Interpreter__Class>(type_info(), "System.Linq.Expressions.Interpreter", "Interpreter");
        }
        inline app::Interpreter* create() {
            return il2cpp::create_object<app::Interpreter>(get_class());
        }
    } // namespace Interpreter
} // namespace app::classes::types
