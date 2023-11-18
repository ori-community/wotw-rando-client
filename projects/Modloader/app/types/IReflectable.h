#pragma once
#include <Modloader/app/structs/IReflectable.h>
#include <Modloader/app/structs/IReflectable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IReflectable {
        inline app::IReflectable__Class** type_info() {
            static app::IReflectable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IReflectable__Class**)(modloader::win::memory::resolve_rva(0x04758FC8));
            }
            return cache;
        }
        inline app::IReflectable__Class* get_class() {
            return il2cpp::get_class<app::IReflectable__Class>(type_info(), "", "IReflectable");
        }
    } // namespace IReflectable
} // namespace app::classes::types
