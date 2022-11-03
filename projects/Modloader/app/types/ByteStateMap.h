#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteStateMap {
        namespace {
            inline app::ByteStateMap__Class* type_info_ref = nullptr;
        }
        inline app::ByteStateMap__Class** type_info = &type_info_ref;
        inline app::ByteStateMap__Class* get_class() {
            return il2cpp::get_class<app::ByteStateMap__Class>(type_info, "", "ByteStateMap");
        }
        inline app::ByteStateMap* create() {
            return il2cpp::create_object<app::ByteStateMap>(get_class());
        }
    } // namespace ByteStateMap
} // namespace app::classes::types
