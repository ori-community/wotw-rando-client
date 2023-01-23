#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeepScenesLoaded__Class.h>
#include <Modloader/app/structs/KeepScenesLoaded.h>

namespace app::classes::types {
    namespace KeepScenesLoaded {
        namespace {
            inline app::KeepScenesLoaded__Class* type_info_ref = nullptr;
        }
        inline app::KeepScenesLoaded__Class** type_info = &type_info_ref;
        inline app::KeepScenesLoaded__Class* get_class() {
            return il2cpp::get_class<app::KeepScenesLoaded__Class>(type_info, "Moon.Timeline", "KeepScenesLoaded");
        }
        inline app::KeepScenesLoaded* create() {
            return il2cpp::create_object<app::KeepScenesLoaded>(get_class());
        }
    } // namespace KeepScenesLoaded
} // namespace app::classes::types
