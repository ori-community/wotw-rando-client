#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Int32__Class.h>
#include <Modloader/app/structs/Int32.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::types {
    namespace Int32 {
        inline app::Int32__Class** type_info = (app::Int32__Class**)(modloader::win::memory::resolve_rva(0x04704328));
        inline app::Int32__Class* get_class() {
            return il2cpp::get_class<app::Int32__Class>(type_info, "System", "Int32");
        }
        inline app::Int32* create() {
            return il2cpp::create_object<app::Int32>(get_class());
        }
        inline app::Int32__Boxed* box(int32_t value) {
            return il2cpp::box_value<app::Int32__Boxed>(get_class(), value);
        }
        inline app::Int32__Array* create_array(int size) {
            return il2cpp::array_new<app::Int32__Array>(get_class(), size);
        }
        inline app::Int32__Array* create_array(const std::vector<int32_t>& items) {
            return il2cpp::array_new<app::Int32__Array>(get_class(), items);
        }
    } // namespace Int32
} // namespace app::classes::types
