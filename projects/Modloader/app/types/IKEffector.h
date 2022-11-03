#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKEffector {
        inline app::IKEffector__Class** type_info = (app::IKEffector__Class**)(modloader::win::memory::resolve_rva(0x04740878));
        inline app::IKEffector__Class* get_class() {
            return il2cpp::get_class<app::IKEffector__Class>(type_info, "RootMotion.FinalIK", "IKEffector");
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
