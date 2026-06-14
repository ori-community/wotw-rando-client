#pragma once
#include <Modloader/app/structs/SpikeSlugEntity_SpikeSlugShellState__Enum.h>
#include <Modloader/app/structs/SpikeSlugEntity_SpikeSlugShellState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_SpikeSlugShellState__Enum {
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class** type_info() {
            static app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_SpikeSlugShellState__Enum__Class>(type_info(), "", "SpikeSlugEntity", "SpikeSlugShellState");
        }
        inline app::SpikeSlugEntity_SpikeSlugShellState__Enum* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_SpikeSlugShellState__Enum>(get_class());
        }
    } // namespace SpikeSlugEntity_SpikeSlugShellState__Enum
} // namespace app::classes::types
