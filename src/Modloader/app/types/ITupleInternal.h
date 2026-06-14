#pragma once
#include <Modloader/app/structs/ITupleInternal.h>
#include <Modloader/app/structs/ITupleInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITupleInternal {
        inline app::ITupleInternal__Class** type_info() {
            static app::ITupleInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITupleInternal__Class**)(modloader::win::memory::resolve_rva(0x0475E8B8));
            }
            return cache;
        }
        inline app::ITupleInternal__Class* get_class() {
            return il2cpp::get_class<app::ITupleInternal__Class>(type_info(), "System", "ITupleInternal");
        }
    } // namespace ITupleInternal
} // namespace app::classes::types
