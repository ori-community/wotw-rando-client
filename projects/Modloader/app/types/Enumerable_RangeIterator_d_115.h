#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Enumerable_RangeIterator_d_115 {
        inline app::Enumerable_RangeIterator_d_115__Class** type_info = (app::Enumerable_RangeIterator_d_115__Class**)(modloader::win::memory::resolve_rva(0x0475BE40));
        inline app::Enumerable_RangeIterator_d_115__Class* get_class() {
            return il2cpp::get_nested_class<app::Enumerable_RangeIterator_d_115__Class>(type_info, "System.Linq", "Enumerable", "<RangeIterator>d__115");
        }
        inline app::Enumerable_RangeIterator_d_115* create() {
            return il2cpp::create_object<app::Enumerable_RangeIterator_d_115>(get_class());
        }
    } // namespace Enumerable_RangeIterator_d_115
} // namespace app::classes::types
