#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UInt32__Class.h>
#include <Modloader/app/structs/UInt32.h>
#include <Modloader/app/structs/UInt32__Boxed.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::types {
    namespace UInt32 {
        inline app::UInt32__Class** type_info = (app::UInt32__Class**)(modloader::win::memory::resolve_rva(0x04712B40));
        inline app::UInt32__Class* get_class() {
            return il2cpp::get_class<app::UInt32__Class>(type_info, "System", "UInt32");
        }
        inline app::UInt32* create() {
            return il2cpp::create_object<app::UInt32>(get_class());
        }
        inline app::UInt32__Boxed* box(uint32_t value) {
            return il2cpp::box_value<app::UInt32__Boxed>(get_class(), value);
        }
        inline app::UInt32__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt32__Array>(get_class(), size);
        }
        inline app::UInt32__Array* create_array(const std::vector<uint32_t>& items) {
            return il2cpp::array_new<app::UInt32__Array>(get_class(), items);
        }
    } // namespace UInt32
} // namespace app::classes::types
