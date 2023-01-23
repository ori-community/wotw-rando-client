#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalVariables__Class.h>
#include <Modloader/app/structs/LocalVariables.h>

namespace app::classes::types {
    namespace LocalVariables {
        inline app::LocalVariables__Class** type_info = (app::LocalVariables__Class**)(modloader::win::memory::resolve_rva(0x04708620));
        inline app::LocalVariables__Class* get_class() {
            return il2cpp::get_class<app::LocalVariables__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalVariables");
        }
        inline app::LocalVariables* create() {
            return il2cpp::create_object<app::LocalVariables>(get_class());
        }
    } // namespace LocalVariables
} // namespace app::classes::types
