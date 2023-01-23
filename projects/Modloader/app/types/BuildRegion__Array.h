#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BuildRegion__Array__Class.h>
#include <Modloader/app/structs/BuildRegion__Array.h>

namespace app::classes::types {
    namespace BuildRegion__Array {
        namespace {
            inline app::BuildRegion__Array__Class* type_info_ref = nullptr;
        }
        inline app::BuildRegion__Array__Class** type_info = &type_info_ref;
        inline app::BuildRegion__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildRegion__Array__Class>(type_info, "PlayFab.MultiplayerModels", "BuildRegion[]");
        }
        inline app::BuildRegion__Array* create() {
            return il2cpp::create_object<app::BuildRegion__Array>(get_class());
        }
    } // namespace BuildRegion__Array
} // namespace app::classes::types
