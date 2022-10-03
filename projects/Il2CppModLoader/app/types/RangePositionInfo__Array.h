#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RangePositionInfo__Array {
        namespace {
            app::RangePositionInfo__Array__Class* type_info_ref = nullptr;
        }
        app::RangePositionInfo__Array__Class** type_info = &type_info_ref;
        inline app::RangePositionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RangePositionInfo__Array__Class>(type_info, "System.Xml.Schema", "RangePositionInfo[]");
        }
        inline app::RangePositionInfo__Array* create() {
            return il2cpp::create_object<app::RangePositionInfo__Array>(get_class());
        }
    } // namespace RangePositionInfo__Array
} // namespace app::classes::types
