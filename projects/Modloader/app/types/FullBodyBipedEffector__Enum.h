#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FullBodyBipedEffector__Enum {
        inline app::FullBodyBipedEffector__Enum__Class** type_info = (app::FullBodyBipedEffector__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789588));
        inline app::FullBodyBipedEffector__Enum__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedEffector__Enum__Class>(type_info, "RootMotion.FinalIK", "FullBodyBipedEffector");
        }
        inline app::FullBodyBipedEffector__Enum* create() {
            return il2cpp::create_object<app::FullBodyBipedEffector__Enum>(get_class());
        }
        inline app::FullBodyBipedEffector__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::FullBodyBipedEffector__Enum__Array>(get_class(), size);
        }
        inline app::FullBodyBipedEffector__Enum__Array* create_array(const std::vector<app::FullBodyBipedEffector__Enum*>& items) {
            return il2cpp::array_new<app::FullBodyBipedEffector__Enum__Array>(get_class(), items);
        }
    } // namespace FullBodyBipedEffector__Enum
} // namespace app::classes::types
