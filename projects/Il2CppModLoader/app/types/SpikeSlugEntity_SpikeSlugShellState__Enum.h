#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_SpikeSlugShellState__Enum {
        namespace {
            app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class* type_info_ref = nullptr;
        }
        app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class** type_info = &type_info_ref;
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class>(type_info, "", "SpikeSlugEntity", "SpikeSlugShellState");
        }
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_SpikeSlugShellState__Enum>(get_class());
        }
    } // namespace SpikeSlugEntity_SpikeSlugShellState__Enum
} // namespace app::classes::types
