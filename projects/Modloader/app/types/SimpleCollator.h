#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleCollator {
        inline app::SimpleCollator__Class** type_info = (app::SimpleCollator__Class**)(modloader::win::memory::resolve_rva(0x0477A6A8));
        inline app::SimpleCollator__Class* get_class() {
            return il2cpp::get_class<app::SimpleCollator__Class>(type_info, "Mono.Globalization.Unicode", "SimpleCollator");
        }
        inline app::SimpleCollator* create() {
            return il2cpp::create_object<app::SimpleCollator>(get_class());
        }
        inline app::SimpleCollator__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleCollator__Array>(get_class(), size);
        }
        inline app::SimpleCollator__Array* create_array(const std::vector<app::SimpleCollator*>& items) {
            return il2cpp::array_new<app::SimpleCollator__Array>(get_class(), items);
        }
    } // namespace SimpleCollator
} // namespace app::classes::types
