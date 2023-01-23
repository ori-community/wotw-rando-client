#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CutsceneState__Array__Class.h>
#include <Modloader/app/structs/CutsceneState__Array.h>

namespace app::classes::types {
    namespace CutsceneState__Array {
        namespace {
            inline app::CutsceneState__Array__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneState__Array__Class** type_info = &type_info_ref;
        inline app::CutsceneState__Array__Class* get_class() {
            return il2cpp::get_class<app::CutsceneState__Array__Class>(type_info, "", "CutsceneState[]");
        }
        inline app::CutsceneState__Array* create() {
            return il2cpp::create_object<app::CutsceneState__Array>(get_class());
        }
    } // namespace CutsceneState__Array
} // namespace app::classes::types
