#pragma once
#include <Modloader/app/structs/SeinLevel.h>
#include <Modloader/app/structs/SeinLevel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLevel {
        inline app::SeinLevel__Class** type_info() {
            static app::SeinLevel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinLevel__Class**)(modloader::win::memory::resolve_rva(0x047684B8));
            }
            return cache;
        }
        inline app::SeinLevel__Class* get_class() {
            return il2cpp::get_class<app::SeinLevel__Class>(type_info(), "", "SeinLevel");
        }
        inline app::SeinLevel* create() {
            return il2cpp::create_object<app::SeinLevel>(get_class());
        }
    } // namespace SeinLevel
} // namespace app::classes::types
