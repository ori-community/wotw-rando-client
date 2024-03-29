#pragma once
#include <Modloader/app/structs/TestSet_c.h>
#include <Modloader/app/structs/TestSet_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSet_c {
        inline app::TestSet_c__Class** type_info() {
            static app::TestSet_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestSet_c__Class**)(modloader::win::memory::resolve_rva(0x0470CCA0));
            }
            return cache;
        }
        inline app::TestSet_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TestSet_c__Class>(type_info(), "", "TestSet", "<>c");
        }
        inline app::TestSet_c* create() {
            return il2cpp::create_object<app::TestSet_c>(get_class());
        }
    } // namespace TestSet_c
} // namespace app::classes::types
