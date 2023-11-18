#pragma once
#include <Modloader/app/structs/IKEffector.h>
#include <Modloader/app/structs/IKEffector__Array.h>
#include <Modloader/app/structs/IKEffector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKEffector {
        inline app::IKEffector__Class** type_info() {
            static app::IKEffector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKEffector__Class**)(modloader::win::memory::resolve_rva(0x04740878));
            }
            return cache;
        }
        inline app::IKEffector__Class* get_class() {
            return il2cpp::get_class<app::IKEffector__Class>(type_info(), "RootMotion.FinalIK", "IKEffector");
        }
        inline app::IKEffector* create() {
            return il2cpp::create_object<app::IKEffector>(get_class());
        }
        inline app::IKEffector__Array* create_array(int size) {
            return il2cpp::array_new<app::IKEffector__Array>(get_class(), size);
        }
        inline app::IKEffector__Array* create_array(const std::vector<app::IKEffector*>& items) {
            return il2cpp::array_new<app::IKEffector__Array>(get_class(), items);
        }
    } // namespace IKEffector
} // namespace app::classes::types
