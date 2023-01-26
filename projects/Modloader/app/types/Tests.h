#pragma once
#include <Modloader/app/structs/Tests.h>
#include <Modloader/app/structs/Tests__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tests {
        inline app::Tests__Class** type_info() {
            static app::Tests__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tests__Class**)(modloader::win::memory::resolve_rva(0x04740C18));
            }
            return cache;
        }
        inline app::Tests__Class* get_class() {
            return il2cpp::get_class<app::Tests__Class>(type_info(), "HierarchyPerfTest", "Tests");
        }
        inline app::Tests* create() {
            return il2cpp::create_object<app::Tests>(get_class());
        }
    } // namespace Tests
} // namespace app::classes::types
