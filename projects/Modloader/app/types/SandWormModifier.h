#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormModifier__Class.h>
#include <Modloader/app/structs/SandWormModifier.h>

namespace app::classes::types {
    namespace SandWormModifier {
        namespace {
            inline app::SandWormModifier__Class* type_info_ref = nullptr;
        }
        inline app::SandWormModifier__Class** type_info = &type_info_ref;
        inline app::SandWormModifier__Class* get_class() {
            return il2cpp::get_class<app::SandWormModifier__Class>(type_info, "", "SandWormModifier");
        }
        inline app::SandWormModifier* create() {
            return il2cpp::create_object<app::SandWormModifier>(get_class());
        }
    } // namespace SandWormModifier
} // namespace app::classes::types
