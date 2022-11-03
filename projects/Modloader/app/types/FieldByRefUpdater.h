#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldByRefUpdater {
        inline app::FieldByRefUpdater__Class** type_info = (app::FieldByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04736CD0));
        inline app::FieldByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::FieldByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "FieldByRefUpdater");
        }
        inline app::FieldByRefUpdater* create() {
            return il2cpp::create_object<app::FieldByRefUpdater>(get_class());
        }
    } // namespace FieldByRefUpdater
} // namespace app::classes::types
