#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ByRefUpdater__Class.h>
#include <Modloader/app/structs/ByRefUpdater.h>
#include <Modloader/app/structs/ByRefUpdater__Array.h>

namespace app::classes::types {
    namespace ByRefUpdater {
        namespace {
            inline app::ByRefUpdater__Class* type_info_ref = nullptr;
        }
        inline app::ByRefUpdater__Class** type_info = &type_info_ref;
        inline app::ByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "ByRefUpdater");
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
