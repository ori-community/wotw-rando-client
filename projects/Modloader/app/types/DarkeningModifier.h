#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DarkeningModifier__Class.h>
#include <Modloader/app/structs/DarkeningModifier.h>

namespace app::classes::types {
    namespace DarkeningModifier {
        namespace {
            inline app::DarkeningModifier__Class* type_info_ref = nullptr;
        }
        inline app::DarkeningModifier__Class** type_info = &type_info_ref;
        inline app::DarkeningModifier__Class* get_class() {
            return il2cpp::get_class<app::DarkeningModifier__Class>(type_info, "", "DarkeningModifier");
        }
        inline app::DarkeningModifier* create() {
            return il2cpp::create_object<app::DarkeningModifier>(get_class());
        }
    } // namespace DarkeningModifier
} // namespace app::classes::types
