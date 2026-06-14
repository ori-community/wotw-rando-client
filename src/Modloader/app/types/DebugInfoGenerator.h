#pragma once
#include <Modloader/app/structs/DebugInfoGenerator.h>
#include <Modloader/app/structs/DebugInfoGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugInfoGenerator {
        inline app::DebugInfoGenerator__Class** type_info() {
            static app::DebugInfoGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugInfoGenerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugInfoGenerator__Class* get_class() {
            return il2cpp::get_class<app::DebugInfoGenerator__Class>(type_info(), "System.Runtime.CompilerServices", "DebugInfoGenerator");
        }
        inline app::DebugInfoGenerator* create() {
            return il2cpp::create_object<app::DebugInfoGenerator>(get_class());
        }
    } // namespace DebugInfoGenerator
} // namespace app::classes::types
