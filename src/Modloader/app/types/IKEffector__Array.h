#pragma once
#include <Modloader/app/structs/IKEffector__Array.h>
#include <Modloader/app/structs/IKEffector__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKEffector__Array {
        inline app::IKEffector__Array__Class** type_info() {
            static app::IKEffector__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x04789020));
            }
            return cache;
        }
        inline app::IKEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::IKEffector__Array__Class>(type_info(), "RootMotion.FinalIK", "IKEffector[]");
        }
        inline app::IKEffector__Array* create() {
            return il2cpp::create_object<app::IKEffector__Array>(get_class());
        }
    } // namespace IKEffector__Array
} // namespace app::classes::types
