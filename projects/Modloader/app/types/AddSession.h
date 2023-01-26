#pragma once
#include <Modloader/app/structs/AddSession.h>
#include <Modloader/app/structs/AddSession__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddSession {
        inline app::AddSession__Class** type_info() {
            static app::AddSession__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AddSession__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AddSession__Class* get_class() {
            return il2cpp::get_class<app::AddSession__Class>(type_info(), "Moon.Telemetry", "AddSession");
        }
        inline app::AddSession* create() {
            return il2cpp::create_object<app::AddSession>(get_class());
        }
    } // namespace AddSession
} // namespace app::classes::types
