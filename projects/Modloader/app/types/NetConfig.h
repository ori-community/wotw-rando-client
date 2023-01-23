#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NetConfig__Class.h>
#include <Modloader/app/structs/NetConfig.h>

namespace app::classes::types {
    namespace NetConfig {
        namespace {
            inline app::NetConfig__Class* type_info_ref = nullptr;
        }
        inline app::NetConfig__Class** type_info = &type_info_ref;
        inline app::NetConfig__Class* get_class() {
            return il2cpp::get_class<app::NetConfig__Class>(type_info, "System.Net", "NetConfig");
        }
        inline app::NetConfig* create() {
            return il2cpp::create_object<app::NetConfig>(get_class());
        }
    } // namespace NetConfig
} // namespace app::classes::types
