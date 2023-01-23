#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinInteraction__Class.h>
#include <Modloader/app/structs/SeinInteraction.h>

namespace app::classes::types {
    namespace SeinInteraction {
        namespace {
            inline app::SeinInteraction__Class* type_info_ref = nullptr;
        }
        inline app::SeinInteraction__Class** type_info = &type_info_ref;
        inline app::SeinInteraction__Class* get_class() {
            return il2cpp::get_class<app::SeinInteraction__Class>(type_info, "", "SeinInteraction");
        }
        inline app::SeinInteraction* create() {
            return il2cpp::create_object<app::SeinInteraction>(get_class());
        }
    } // namespace SeinInteraction
} // namespace app::classes::types
