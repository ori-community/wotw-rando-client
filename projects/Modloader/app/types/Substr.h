#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Substr__Class.h>
#include <Modloader/app/structs/Substr.h>
#include <Modloader/app/structs/Substr__Boxed.h>
#include <Modloader/app/structs/Substr__Array.h>

namespace app::classes::types {
    namespace Substr {
        inline app::Substr__Class** type_info = (app::Substr__Class**)(modloader::win::memory::resolve_rva(0x047792D8));
        inline app::Substr__Class* get_class() {
            return il2cpp::get_class<app::Substr__Class>(type_info, "Moon", "Substr");
        }
        inline app::Substr* create() {
            return il2cpp::create_object<app::Substr>(get_class());
        }
        inline app::Substr__Boxed* box(app::Substr value) {
            return il2cpp::box_value<app::Substr__Boxed>(get_class(), value);
        }
        inline app::Substr__Array* create_array(int size) {
            return il2cpp::array_new<app::Substr__Array>(get_class(), size);
        }
        inline app::Substr__Array* create_array(const std::vector<app::Substr>& items) {
            return il2cpp::array_new<app::Substr__Array>(get_class(), items);
        }
    } // namespace Substr
} // namespace app::classes::types
