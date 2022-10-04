#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITupleInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITupleInternal__Class** type_info;
        inline app::ITupleInternal__Class* get_class() {
            return il2cpp::get_class<app::ITupleInternal__Class>(type_info, "System", "ITupleInternal");
        }
    } // namespace ITupleInternal
} // namespace app::classes::types
