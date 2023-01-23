#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICarryable__Class.h>
#include <Modloader/app/structs/ICarryable__Array.h>
#include <Modloader/app/structs/ICarryable.h>

namespace app::classes::types {
    namespace ICarryable {
        inline app::ICarryable__Class** type_info = (app::ICarryable__Class**)(modloader::win::memory::resolve_rva(0x04743C98));
        inline app::ICarryable__Class* get_class() {
            return il2cpp::get_class<app::ICarryable__Class>(type_info, "", "ICarryable");
        }
        inline app::ICarryable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICarryable__Array>(get_class(), size);
        }
        inline app::ICarryable__Array* create_array(const std::vector<app::ICarryable*>& items) {
            return il2cpp::array_new<app::ICarryable__Array>(get_class(), items);
        }
    } // namespace ICarryable
} // namespace app::classes::types
