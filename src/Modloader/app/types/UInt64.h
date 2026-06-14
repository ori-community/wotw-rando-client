#pragma once
#include <Modloader/app/structs/UInt64.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/UInt64__Boxed.h>
#include <Modloader/app/structs/UInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt64 {
        inline app::UInt64__Class** type_info() {
            static app::UInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt64__Class**)(modloader::win::memory::resolve_rva(0x04731750));
            }
            return cache;
        }
        inline app::UInt64__Class* get_class() {
            return il2cpp::get_class<app::UInt64__Class>(type_info(), "System", "UInt64");
        }
        inline app::UInt64* create() {
            return il2cpp::create_object<app::UInt64>(get_class());
        }
        inline app::UInt64__Boxed* box(uint64_t value) {
            return il2cpp::box_value<app::UInt64__Boxed>(get_class(), value);
        }
        inline app::UInt64__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt64__Array>(get_class(), size);
        }
        inline app::UInt64__Array* create_array(const std::vector<uint64_t>& items) {
            return il2cpp::array_new<app::UInt64__Array>(get_class(), items);
        }
    } // namespace UInt64
} // namespace app::classes::types
