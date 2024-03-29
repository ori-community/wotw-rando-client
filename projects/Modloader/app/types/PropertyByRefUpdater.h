#pragma once
#include <Modloader/app/structs/PropertyByRefUpdater.h>
#include <Modloader/app/structs/PropertyByRefUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyByRefUpdater {
        inline app::PropertyByRefUpdater__Class** type_info() {
            static app::PropertyByRefUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x04756AA8));
            }
            return cache;
        }
        inline app::PropertyByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::PropertyByRefUpdater__Class>(type_info(), "System.Linq.Expressions.Interpreter", "PropertyByRefUpdater");
        }
        inline app::PropertyByRefUpdater* create() {
            return il2cpp::create_object<app::PropertyByRefUpdater>(get_class());
        }
    } // namespace PropertyByRefUpdater
} // namespace app::classes::types
