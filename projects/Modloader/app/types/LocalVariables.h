#pragma once
#include <Modloader/app/structs/LocalVariables.h>
#include <Modloader/app/structs/LocalVariables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalVariables {
        inline app::LocalVariables__Class** type_info() {
            static app::LocalVariables__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalVariables__Class**)(modloader::win::memory::resolve_rva(0x04708620));
            }
            return cache;
        }
        inline app::LocalVariables__Class* get_class() {
            return il2cpp::get_class<app::LocalVariables__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalVariables");
        }
        inline app::LocalVariables* create() {
            return il2cpp::create_object<app::LocalVariables>(get_class());
        }
    } // namespace LocalVariables
} // namespace app::classes::types
