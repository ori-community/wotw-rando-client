#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RangePositionInfo__Array__Class.h>
#include <Modloader/app/structs/RangePositionInfo__Array.h>

namespace app::classes::types {
    namespace RangePositionInfo__Array {
        namespace {
            inline app::RangePositionInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::RangePositionInfo__Array__Class** type_info = &type_info_ref;
        inline app::RangePositionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RangePositionInfo__Array__Class>(type_info, "System.Xml.Schema", "RangePositionInfo[]");
        }
        inline app::RangePositionInfo__Array* create() {
            return il2cpp::create_object<app::RangePositionInfo__Array>(get_class());
        }
    } // namespace RangePositionInfo__Array
} // namespace app::classes::types
