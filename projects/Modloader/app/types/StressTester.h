#pragma once
#include <Modloader/app/structs/StressTester.h>
#include <Modloader/app/structs/StressTester__Array.h>
#include <Modloader/app/structs/StressTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester {
        inline app::StressTester__Class** type_info() {
            static app::StressTester__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTester__Class**)(modloader::win::memory::resolve_rva(0x04733568));
            }
            return cache;
        }
        inline app::StressTester__Class* get_class() {
            return il2cpp::get_class<app::StressTester__Class>(type_info(), "", "StressTester");
        }
        inline app::StressTester* create() {
            return il2cpp::create_object<app::StressTester>(get_class());
        }
        inline app::StressTester__Array* create_array(int size) {
            return il2cpp::array_new<app::StressTester__Array>(get_class(), size);
        }
        inline app::StressTester__Array* create_array(const std::vector<app::StressTester*>& items) {
            return il2cpp::array_new<app::StressTester__Array>(get_class(), items);
        }
    } // namespace StressTester
} // namespace app::classes::types
