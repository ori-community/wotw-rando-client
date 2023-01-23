#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ByteUberStateCondition__Class.h>
#include <Modloader/app/structs/ByteUberStateCondition.h>

namespace app::classes::types {
    namespace ByteUberStateCondition {
        inline app::ByteUberStateCondition__Class** type_info = (app::ByteUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x0471DA48));
        inline app::ByteUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::ByteUberStateCondition__Class>(type_info, "", "ByteUberStateCondition");
        }
        inline app::ByteUberStateCondition* create() {
            return il2cpp::create_object<app::ByteUberStateCondition>(get_class());
        }
    } // namespace ByteUberStateCondition
} // namespace app::classes::types
