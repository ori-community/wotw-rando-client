#pragma once
#include <Modloader/app/structs/ArrayByRefUpdater.h>
#include <Modloader/app/structs/ArrayByRefUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayByRefUpdater {
        inline app::ArrayByRefUpdater__Class** type_info() {
            static app::ArrayByRefUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArrayByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x047932D8));
            }
            return cache;
        }
        inline app::ArrayByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ArrayByRefUpdater__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ArrayByRefUpdater");
        }
        inline app::ArrayByRefUpdater* create() {
            return il2cpp::create_object<app::ArrayByRefUpdater>(get_class());
        }
    } // namespace ArrayByRefUpdater
} // namespace app::classes::types
