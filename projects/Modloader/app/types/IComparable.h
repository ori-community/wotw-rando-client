#pragma once
#include <Modloader/app/structs/IComparable.h>
#include <Modloader/app/structs/IComparable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComparable {
        inline app::IComparable__Class** type_info() {
            static app::IComparable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IComparable__Class**)(modloader::win::memory::resolve_rva(0x04743E08));
            }
            return cache;
        }
        inline app::IComparable__Class* get_class() {
            return il2cpp::get_class<app::IComparable__Class>(type_info(), "System", "IComparable");
        }
    } // namespace IComparable
} // namespace app::classes::types
