#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IndexMethodByRefUpdater {
        inline app::IndexMethodByRefUpdater__Class** type_info = (app::IndexMethodByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04738058));
        inline app::IndexMethodByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::IndexMethodByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "IndexMethodByRefUpdater");
        }
        inline app::IndexMethodByRefUpdater* create() {
            return il2cpp::create_object<app::IndexMethodByRefUpdater>(get_class());
        }
    } // namespace IndexMethodByRefUpdater
} // namespace app::classes::types
