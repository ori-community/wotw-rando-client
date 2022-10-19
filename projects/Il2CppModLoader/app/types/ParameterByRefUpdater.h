#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterByRefUpdater {
        inline app::ParameterByRefUpdater__Class** type_info = (app::ParameterByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x0478EFC8));
        inline app::ParameterByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ParameterByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "ParameterByRefUpdater");
        }
        inline app::ParameterByRefUpdater* create() {
            return il2cpp::create_object<app::ParameterByRefUpdater>(get_class());
        }
    } // namespace ParameterByRefUpdater
} // namespace app::classes::types
