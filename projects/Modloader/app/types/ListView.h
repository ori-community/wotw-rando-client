#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListView__Class.h>
#include <Modloader/app/structs/ListView.h>

namespace app::classes::types {
    namespace ListView {
        inline app::ListView__Class** type_info = (app::ListView__Class**)(modloader::win::memory::resolve_rva(0x04785948));
        inline app::ListView__Class* get_class() {
            return il2cpp::get_class<app::ListView__Class>(type_info, "Moon.UberStateVisualization", "ListView");
        }
        inline app::ListView* create() {
            return il2cpp::create_object<app::ListView>(get_class());
        }
    } // namespace ListView
} // namespace app::classes::types
