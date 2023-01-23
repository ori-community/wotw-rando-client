#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReadOnlyException__Class.h>
#include <Modloader/app/structs/ReadOnlyException.h>

namespace app::classes::types {
    namespace ReadOnlyException {
        inline app::ReadOnlyException__Class** type_info = (app::ReadOnlyException__Class**)(modloader::win::memory::resolve_rva(0x0470EE68));
        inline app::ReadOnlyException__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyException__Class>(type_info, "System.Data", "ReadOnlyException");
        }
        inline app::ReadOnlyException* create() {
            return il2cpp::create_object<app::ReadOnlyException>(get_class());
        }
    } // namespace ReadOnlyException
} // namespace app::classes::types
