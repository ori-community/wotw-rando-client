#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LongList__Class.h>
#include <Modloader/app/structs/LongList.h>

namespace app::classes::types {
    namespace LongList {
        inline app::LongList__Class** type_info = (app::LongList__Class**)(modloader::win::memory::resolve_rva(0x04762240));
        inline app::LongList__Class* get_class() {
            return il2cpp::get_class<app::LongList__Class>(type_info, "System.Runtime.Serialization", "LongList");
        }
        inline app::LongList* create() {
            return il2cpp::create_object<app::LongList>(get_class());
        }
    } // namespace LongList
} // namespace app::classes::types
