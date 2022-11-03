#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArrayByRefUpdater {
        inline app::ArrayByRefUpdater__Class** type_info = (app::ArrayByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x047932D8));
        inline app::ArrayByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ArrayByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "ArrayByRefUpdater");
        }
        inline app::ArrayByRefUpdater* create() {
            return il2cpp::create_object<app::ArrayByRefUpdater>(get_class());
        }
    } // namespace ArrayByRefUpdater
} // namespace app::classes::types
