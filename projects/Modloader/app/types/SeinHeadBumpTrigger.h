#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinHeadBumpTrigger__Class.h>
#include <Modloader/app/structs/SeinHeadBumpTrigger.h>

namespace app::classes::types {
    namespace SeinHeadBumpTrigger {
        namespace {
            inline app::SeinHeadBumpTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SeinHeadBumpTrigger__Class** type_info = &type_info_ref;
        inline app::SeinHeadBumpTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinHeadBumpTrigger__Class>(type_info, "", "SeinHeadBumpTrigger");
        }
        inline app::SeinHeadBumpTrigger* create() {
            return il2cpp::create_object<app::SeinHeadBumpTrigger>(get_class());
        }
    } // namespace SeinHeadBumpTrigger
} // namespace app::classes::types
