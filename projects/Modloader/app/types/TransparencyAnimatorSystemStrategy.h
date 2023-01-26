#pragma once
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy {
        inline app::TransparencyAnimatorSystemStrategy__Class** type_info() {
            static app::TransparencyAnimatorSystemStrategy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparencyAnimatorSystemStrategy__Class**)(modloader::win::memory::resolve_rva(0x04700C90));
            }
            return cache;
        }
        inline app::TransparencyAnimatorSystemStrategy__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystemStrategy__Class>(type_info(), "Moon.Timeline", "TransparencyAnimatorSystemStrategy");
        }
        inline app::TransparencyAnimatorSystemStrategy* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy>(get_class());
        }
    } // namespace TransparencyAnimatorSystemStrategy
} // namespace app::classes::types
