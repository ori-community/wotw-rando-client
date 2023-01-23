#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISkipCutsceneAction__Array__Class.h>
#include <Modloader/app/structs/ISkipCutsceneAction__Array.h>

namespace app::classes::types {
    namespace ISkipCutsceneAction__Array {
        namespace {
            inline app::ISkipCutsceneAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISkipCutsceneAction__Array__Class** type_info = &type_info_ref;
        inline app::ISkipCutsceneAction__Array__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutsceneAction__Array__Class>(type_info, "", "ISkipCutsceneAction[]");
        }
        inline app::ISkipCutsceneAction__Array* create() {
            return il2cpp::create_object<app::ISkipCutsceneAction__Array>(get_class());
        }
    } // namespace ISkipCutsceneAction__Array
} // namespace app::classes::types
