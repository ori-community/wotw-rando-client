#pragma once
#include <Modloader/app/structs/test.h>
#include <Modloader/app/structs/test__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace test {
        inline app::test__Class** type_info() {
            static app::test__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::test__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::test__Class* get_class() {
            return il2cpp::get_class<app::test__Class>(type_info(), "", "test");
        }
        inline app::test* create() {
            return il2cpp::create_object<app::test>(get_class());
        }
    } // namespace test
} // namespace app::classes::types
#pragma once
#include <Modloader/app/structs/Test.h>
#include <Modloader/app/structs/Test__Array.h>
#include <Modloader/app/structs/Test__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Test {
        inline app::Test__Class** type_info() {
            static app::Test__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Test__Class**)(modloader::win::memory::resolve_rva(0x04778550));
            }
            return cache;
        }
        inline app::Test__Class* get_class() {
            return il2cpp::get_class<app::Test__Class>(type_info(), "", "Test");
        }
        inline app::Test* create() {
            return il2cpp::create_object<app::Test>(get_class());
        }
        inline app::Test__Array* create_array(int size) {
            return il2cpp::array_new<app::Test__Array>(get_class(), size);
        }
        inline app::Test__Array* create_array(const std::vector<app::Test*>& items) {
            return il2cpp::array_new<app::Test__Array>(get_class(), items);
        }
    } // namespace Test
} // namespace app::classes::types
