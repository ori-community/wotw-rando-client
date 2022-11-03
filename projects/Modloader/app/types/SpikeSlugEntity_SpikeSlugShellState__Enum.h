#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_SpikeSlugShellState__Enum {
        namespace {
            inline app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class** type_info = &type_info_ref;
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class>(type_info, "", "SpikeSlugEntity", "SpikeSlugShellState");
        }
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_SpikeSlugShellState__Enum>(get_class());
        }
    } // namespace SpikeSlugEntity_SpikeSlugShellState__Enum
} // namespace app::classes::types
