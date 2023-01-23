#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightLambda__Class.h>
#include <Modloader/app/structs/LightLambda.h>

namespace app::classes::types {
    namespace LightLambda {
        inline app::LightLambda__Class** type_info = (app::LightLambda__Class**)(modloader::win::memory::resolve_rva(0x0472A460));
        inline app::LightLambda__Class* get_class() {
            return il2cpp::get_class<app::LightLambda__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightLambda");
        }
        inline app::LightLambda* create() {
            return il2cpp::create_object<app::LightLambda>(get_class());
        }
    } // namespace LightLambda
} // namespace app::classes::types
