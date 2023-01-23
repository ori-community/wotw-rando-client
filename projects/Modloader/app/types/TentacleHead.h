#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleHead__Class.h>
#include <Modloader/app/structs/TentacleHead.h>

namespace app::classes::types {
    namespace TentacleHead {
        namespace {
            inline app::TentacleHead__Class* type_info_ref = nullptr;
        }
        inline app::TentacleHead__Class** type_info = &type_info_ref;
        inline app::TentacleHead__Class* get_class() {
            return il2cpp::get_class<app::TentacleHead__Class>(type_info, "", "TentacleHead");
        }
        inline app::TentacleHead* create() {
            return il2cpp::create_object<app::TentacleHead>(get_class());
        }
    } // namespace TentacleHead
} // namespace app::classes::types
