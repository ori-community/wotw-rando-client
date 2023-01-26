#pragma once
#include <Modloader/app/structs/ParameterByRefUpdater.h>
#include <Modloader/app/structs/ParameterByRefUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterByRefUpdater {
        inline app::ParameterByRefUpdater__Class** type_info() {
            static app::ParameterByRefUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterByRefUpdater__Class**)(modloader::win::memory::resolve_rva(0x0478EFC8));
            }
            return cache;
        }
        inline app::ParameterByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ParameterByRefUpdater__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ParameterByRefUpdater");
        }
        inline app::ParameterByRefUpdater* create() {
            return il2cpp::create_object<app::ParameterByRefUpdater>(get_class());
        }
    } // namespace ParameterByRefUpdater
} // namespace app::classes::types
