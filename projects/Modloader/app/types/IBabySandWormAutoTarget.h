#pragma once
#include <Modloader/app/structs/IBabySandWormAutoTarget.h>
#include <Modloader/app/structs/IBabySandWormAutoTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBabySandWormAutoTarget {
        inline app::IBabySandWormAutoTarget__Class** type_info() {
            static app::IBabySandWormAutoTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBabySandWormAutoTarget__Class**)(modloader::win::memory::resolve_rva(0x04769468));
            }
            return cache;
        }
        inline app::IBabySandWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabySandWormAutoTarget__Class>(type_info(), "", "IBabySandWormAutoTarget");
        }
    } // namespace IBabySandWormAutoTarget
} // namespace app::classes::types
