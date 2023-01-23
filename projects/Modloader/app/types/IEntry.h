#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEntry__Class.h>
#include <Modloader/app/structs/IEntry__Array.h>
#include <Modloader/app/structs/IEntry.h>

namespace app::classes::types {
    namespace IEntry {
        inline app::IEntry__Class** type_info = (app::IEntry__Class**)(modloader::win::memory::resolve_rva(0x04753520));
        inline app::IEntry__Class* get_class() {
            return il2cpp::get_class<app::IEntry__Class>(type_info, "", "IEntry");
        }
        inline app::IEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntry__Array>(get_class(), size);
        }
        inline app::IEntry__Array* create_array(const std::vector<app::IEntry*>& items) {
            return il2cpp::array_new<app::IEntry__Array>(get_class(), items);
        }
    } // namespace IEntry
} // namespace app::classes::types
