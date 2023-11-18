#pragma once
#include <Modloader/app/structs/ByRefUpdater.h>
#include <Modloader/app/structs/ByRefUpdater__Array.h>
#include <Modloader/app/structs/ByRefUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByRefUpdater {
        inline app::ByRefUpdater__Class** type_info() {
            static app::ByRefUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ByRefUpdater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ByRefUpdater__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ByRefUpdater");
        }
        inline app::ByRefUpdater* create() {
            return il2cpp::create_object<app::ByRefUpdater>(get_class());
        }
        inline app::ByRefUpdater__Array* create_array(int size) {
            return il2cpp::array_new<app::ByRefUpdater__Array>(get_class(), size);
        }
        inline app::ByRefUpdater__Array* create_array(const std::vector<app::ByRefUpdater*>& items) {
            return il2cpp::array_new<app::ByRefUpdater__Array>(get_class(), items);
        }
    } // namespace ByRefUpdater
} // namespace app::classes::types
