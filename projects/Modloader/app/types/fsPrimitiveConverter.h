#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsPrimitiveConverter {
        inline app::fsPrimitiveConverter__Class** type_info = (app::fsPrimitiveConverter__Class**)(modloader::win::memory::resolve_rva(0x0477C0F0));
        inline app::fsPrimitiveConverter__Class* get_class() {
            return il2cpp::get_class<app::fsPrimitiveConverter__Class>(type_info, "FullSerializer.Internal", "fsPrimitiveConverter");
        }
        inline app::fsPrimitiveConverter* create() {
            return il2cpp::create_object<app::fsPrimitiveConverter>(get_class());
        }
    } // namespace fsPrimitiveConverter
} // namespace app::classes::types
