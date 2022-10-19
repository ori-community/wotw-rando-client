#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITupleInternal {
        inline app::ITupleInternal__Class** type_info = (app::ITupleInternal__Class**)(modloader::win::memory::resolve_rva(0x0475E8B8));
        inline app::ITupleInternal__Class* get_class() {
            return il2cpp::get_class<app::ITupleInternal__Class>(type_info, "System", "ITupleInternal");
        }
    } // namespace ITupleInternal
} // namespace app::classes::types
