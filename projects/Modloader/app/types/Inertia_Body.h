#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Inertia_Body__Class.h>
#include <Modloader/app/structs/Inertia_Body.h>
#include <Modloader/app/structs/Inertia_Body__Array.h>

namespace app::classes::types {
    namespace Inertia_Body {
        namespace {
            inline app::Inertia_Body__Class* type_info_ref = nullptr;
        }
        inline app::Inertia_Body__Class** type_info = &type_info_ref;
        inline app::Inertia_Body__Class* get_class() {
            return il2cpp::get_nested_class<app::Inertia_Body__Class>(type_info, "RootMotion.FinalIK", "Inertia", "Body");
        }
        inline app::Inertia_Body* create() {
            return il2cpp::create_object<app::Inertia_Body>(get_class());
        }
        inline app::Inertia_Body__Array* create_array(int size) {
            return il2cpp::array_new<app::Inertia_Body__Array>(get_class(), size);
        }
        inline app::Inertia_Body__Array* create_array(const std::vector<app::Inertia_Body*>& items) {
            return il2cpp::array_new<app::Inertia_Body__Array>(get_class(), items);
        }
    } // namespace Inertia_Body
} // namespace app::classes::types
