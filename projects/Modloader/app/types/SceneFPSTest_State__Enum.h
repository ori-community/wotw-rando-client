#pragma once
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#include <Modloader/app/structs/SceneFPSTest_State__Enum__Array.h>
#include <Modloader/app/structs/SceneFPSTest_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest_State__Enum {
        inline app::SceneFPSTest_State__Enum__Class** type_info() {
            static app::SceneFPSTest_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneFPSTest_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04734E58));
            }
            return cache;
        }
        inline app::SceneFPSTest_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFPSTest_State__Enum__Class>(type_info(), "", "SceneFPSTest", "State");
        }
        inline app::SceneFPSTest_State__Enum* create() {
            return il2cpp::create_object<app::SceneFPSTest_State__Enum>(get_class());
        }
        inline app::SceneFPSTest_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneFPSTest_State__Enum__Array>(get_class(), size);
        }
        inline app::SceneFPSTest_State__Enum__Array* create_array(const std::vector<app::SceneFPSTest_State__Enum*>& items) {
            return il2cpp::array_new<app::SceneFPSTest_State__Enum__Array>(get_class(), items);
        }
    } // namespace SceneFPSTest_State__Enum
} // namespace app::classes::types
