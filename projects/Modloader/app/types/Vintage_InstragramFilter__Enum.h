#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vintage_InstragramFilter__Enum__Class.h>
#include <Modloader/app/structs/Vintage_InstragramFilter__Enum.h>

namespace app::classes::types {
    namespace Vintage_InstragramFilter__Enum {
        inline app::Vintage_InstragramFilter__Enum__Class** type_info = (app::Vintage_InstragramFilter__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478B998));
        inline app::Vintage_InstragramFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Vintage_InstragramFilter__Enum__Class>(type_info, "Colorful", "Vintage", "InstragramFilter");
        }
        inline app::Vintage_InstragramFilter__Enum* create() {
            return il2cpp::create_object<app::Vintage_InstragramFilter__Enum>(get_class());
        }
    } // namespace Vintage_InstragramFilter__Enum
} // namespace app::classes::types
