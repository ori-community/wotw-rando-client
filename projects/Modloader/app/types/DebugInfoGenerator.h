#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugInfoGenerator {
        namespace {
            inline app::DebugInfoGenerator__Class* type_info_ref = nullptr;
        }
        inline app::DebugInfoGenerator__Class** type_info = &type_info_ref;
        inline app::DebugInfoGenerator__Class* get_class() {
            return il2cpp::get_class<app::DebugInfoGenerator__Class>(type_info, "System.Runtime.CompilerServices", "DebugInfoGenerator");
        }
        inline app::DebugInfoGenerator* create() {
            return il2cpp::create_object<app::DebugInfoGenerator>(get_class());
        }
    } // namespace DebugInfoGenerator
} // namespace app::classes::types
