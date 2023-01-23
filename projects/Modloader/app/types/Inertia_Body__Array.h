#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Inertia_Body__Array__Class.h>
#include <Modloader/app/structs/Inertia_Body__Array.h>

namespace app::classes::types {
    namespace Inertia_Body__Array {
        namespace {
            inline app::Inertia_Body__Array__Class* type_info_ref = nullptr;
        }
        inline app::Inertia_Body__Array__Class** type_info = &type_info_ref;
        inline app::Inertia_Body__Array__Class* get_class() {
            return il2cpp::get_class<app::Inertia_Body__Array__Class>(type_info, "RootMotion.FinalIK", "Inertia+Body[]");
        }
        inline app::Inertia_Body__Array* create() {
            return il2cpp::create_object<app::Inertia_Body__Array>(get_class());
        }
    } // namespace Inertia_Body__Array
} // namespace app::classes::types
