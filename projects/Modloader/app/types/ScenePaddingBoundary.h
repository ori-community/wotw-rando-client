#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenePaddingBoundary__Class.h>
#include <Modloader/app/structs/ScenePaddingBoundary.h>

namespace app::classes::types {
    namespace ScenePaddingBoundary {
        namespace {
            inline app::ScenePaddingBoundary__Class* type_info_ref = nullptr;
        }
        inline app::ScenePaddingBoundary__Class** type_info = &type_info_ref;
        inline app::ScenePaddingBoundary__Class* get_class() {
            return il2cpp::get_class<app::ScenePaddingBoundary__Class>(type_info, "", "ScenePaddingBoundary");
        }
        inline app::ScenePaddingBoundary* create() {
            return il2cpp::create_object<app::ScenePaddingBoundary>(get_class());
        }
    } // namespace ScenePaddingBoundary
} // namespace app::classes::types
