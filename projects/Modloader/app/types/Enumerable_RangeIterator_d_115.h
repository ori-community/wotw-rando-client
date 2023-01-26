#pragma once
#include <Modloader/app/structs/Enumerable_RangeIterator_d_115.h>
#include <Modloader/app/structs/Enumerable_RangeIterator_d_115__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Enumerable_RangeIterator_d_115 {
        inline app::Enumerable_RangeIterator_d_115__Class** type_info() {
            static app::Enumerable_RangeIterator_d_115__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Enumerable_RangeIterator_d_115__Class**)(modloader::win::memory::resolve_rva(0x0475BE40));
            }
            return cache;
        }
        inline app::Enumerable_RangeIterator_d_115__Class* get_class() {
            return il2cpp::get_nested_class<app::Enumerable_RangeIterator_d_115__Class>(type_info(), "System.Linq", "Enumerable", "<RangeIterator>d__115");
        }
        inline app::Enumerable_RangeIterator_d_115* create() {
            return il2cpp::create_object<app::Enumerable_RangeIterator_d_115>(get_class());
        }
    } // namespace Enumerable_RangeIterator_d_115
} // namespace app::classes::types
