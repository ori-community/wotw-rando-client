#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoveOnBuild__Class.h>
#include <Modloader/app/structs/RemoveOnBuild.h>

namespace app::classes::types {
    namespace RemoveOnBuild {
        namespace {
            inline app::RemoveOnBuild__Class* type_info_ref = nullptr;
        }
        inline app::RemoveOnBuild__Class** type_info = &type_info_ref;
        inline app::RemoveOnBuild__Class* get_class() {
            return il2cpp::get_class<app::RemoveOnBuild__Class>(type_info, "Moon", "RemoveOnBuild");
        }
        inline app::RemoveOnBuild* create() {
            return il2cpp::create_object<app::RemoveOnBuild>(get_class());
        }
    } // namespace RemoveOnBuild
} // namespace app::classes::types
