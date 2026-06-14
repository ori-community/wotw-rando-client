#pragma once
#include <Modloader/app/structs/TestSet.h>
#include <Modloader/app/structs/TestSet__Array.h>
#include <Modloader/app/structs/TestSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSet {
        inline app::TestSet__Class** type_info() {
            static app::TestSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestSet__Class**)(modloader::win::memory::resolve_rva(0x0476BCD0));
            }
            return cache;
        }
        inline app::TestSet__Class* get_class() {
            return il2cpp::get_class<app::TestSet__Class>(type_info(), "", "TestSet");
        }
        inline app::TestSet* create() {
            return il2cpp::create_object<app::TestSet>(get_class());
        }
        inline app::TestSet__Array* create_array(int size) {
            return il2cpp::array_new<app::TestSet__Array>(get_class(), size);
        }
        inline app::TestSet__Array* create_array(const std::vector<app::TestSet*>& items) {
            return il2cpp::array_new<app::TestSet__Array>(get_class(), items);
        }
    } // namespace TestSet
} // namespace app::classes::types
