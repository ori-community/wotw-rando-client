#pragma once
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage_c.h>
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenMemoriesPage_c {
        inline app::RaceMenuScreenMemoriesPage_c__Class** type_info() {
            static app::RaceMenuScreenMemoriesPage_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceMenuScreenMemoriesPage_c__Class**)(modloader::win::memory::resolve_rva(0x04713F80));
            }
            return cache;
        }
        inline app::RaceMenuScreenMemoriesPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceMenuScreenMemoriesPage_c__Class>(type_info(), "", "RaceMenuScreenMemoriesPage", "<>c");
        }
        inline app::RaceMenuScreenMemoriesPage_c* create() {
            return il2cpp::create_object<app::RaceMenuScreenMemoriesPage_c>(get_class());
        }
    } // namespace RaceMenuScreenMemoriesPage_c
} // namespace app::classes::types
