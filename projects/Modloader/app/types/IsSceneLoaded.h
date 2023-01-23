#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsSceneLoaded__Class.h>
#include <Modloader/app/structs/IsSceneLoaded.h>

namespace app::classes::types {
    namespace IsSceneLoaded {
        namespace {
            inline app::IsSceneLoaded__Class* type_info_ref = nullptr;
        }
        inline app::IsSceneLoaded__Class** type_info = &type_info_ref;
        inline app::IsSceneLoaded__Class* get_class() {
            return il2cpp::get_class<app::IsSceneLoaded__Class>(type_info, "", "IsSceneLoaded");
        }
        inline app::IsSceneLoaded* create() {
            return il2cpp::create_object<app::IsSceneLoaded>(get_class());
        }
    } // namespace IsSceneLoaded
} // namespace app::classes::types
