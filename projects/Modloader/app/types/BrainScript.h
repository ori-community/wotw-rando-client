#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrainScript__Class.h>
#include <Modloader/app/structs/BrainScript.h>

namespace app::classes::types {
    namespace BrainScript {
        namespace {
            inline app::BrainScript__Class* type_info_ref = nullptr;
        }
        inline app::BrainScript__Class** type_info = &type_info_ref;
        inline app::BrainScript__Class* get_class() {
            return il2cpp::get_class<app::BrainScript__Class>(type_info, "", "BrainScript");
        }
        inline app::BrainScript* create() {
            return il2cpp::create_object<app::BrainScript>(get_class());
        }
    } // namespace BrainScript
} // namespace app::classes::types
