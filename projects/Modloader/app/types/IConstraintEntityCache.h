#pragma once
#include <Modloader/app/structs/IConstraintEntityCache.h>
#include <Modloader/app/structs/IConstraintEntityCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConstraintEntityCache {
        inline app::IConstraintEntityCache__Class** type_info() {
            static app::IConstraintEntityCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConstraintEntityCache__Class**)(modloader::win::memory::resolve_rva(0x0474D328));
            }
            return cache;
        }
        inline app::IConstraintEntityCache__Class* get_class() {
            return il2cpp::get_class<app::IConstraintEntityCache__Class>(type_info(), "Moon.Timeline.Constraints", "IConstraintEntityCache");
        }
    } // namespace IConstraintEntityCache
} // namespace app::classes::types
