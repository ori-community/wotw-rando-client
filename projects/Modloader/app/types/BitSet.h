#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BitSet__Class.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>

namespace app::classes::types {
    namespace BitSet {
        inline app::BitSet__Class** type_info = (app::BitSet__Class**)(modloader::win::memory::resolve_rva(0x047157D8));
        inline app::BitSet__Class* get_class() {
            return il2cpp::get_class<app::BitSet__Class>(type_info, "System.Xml.Schema", "BitSet");
        }
        inline app::BitSet* create() {
            return il2cpp::create_object<app::BitSet>(get_class());
        }
        inline app::BitSet__Array* create_array(int size) {
            return il2cpp::array_new<app::BitSet__Array>(get_class(), size);
        }
        inline app::BitSet__Array* create_array(const std::vector<app::BitSet*>& items) {
            return il2cpp::array_new<app::BitSet__Array>(get_class(), items);
        }
    } // namespace BitSet
} // namespace app::classes::types
