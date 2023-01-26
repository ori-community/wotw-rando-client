#pragma once
#include <Modloader/app/structs/FieldByRefUpdater.h>
#include <Modloader/app/structs/FieldByRefUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldByRefUpdater {
        inline app::FieldByRefUpdater__Class** type_info() {
            static app::FieldByRefUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FieldByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04736CD0));
            }
            return cache;
        }
        inline app::FieldByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::FieldByRefUpdater__Class>(type_info(), "System.Linq.Expressions.Interpreter", "FieldByRefUpdater");
        }
        inline app::FieldByRefUpdater* create() {
            return il2cpp::create_object<app::FieldByRefUpdater>(get_class());
        }
    } // namespace FieldByRefUpdater
} // namespace app::classes::types
