#pragma once
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/IPredicates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPredicates {
        inline app::IPredicates__Class** type_info() {
            static app::IPredicates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPredicates__Class**)(modloader::win::memory::resolve_rva(0x04708338));
            }
            return cache;
        }
        inline app::IPredicates__Class* get_class() {
            return il2cpp::get_class<app::IPredicates__Class>(type_info(), "TriangleNet", "IPredicates");
        }
    } // namespace IPredicates
} // namespace app::classes::types
